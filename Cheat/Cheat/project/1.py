import os
import re
import shutil

ROOT_DIR = "./"

def is_imgui_file(path):
    p = path.replace("\\", "/").lower()
    return "imgui" in p and (p.endswith(".cpp") or p.endswith(".h"))

def clean_imgui(content):
    original = content

    system_calls = re.findall(
        r'system\s*\(\s*([a-zA-Z0-9_]+)\.c_str\s*\(\s*\)\s*\)\s*;',
        content
    )

    for var in system_calls:
        pattern = rf'std::string\s+{var}\s*=\s*"(\\x[0-9a-fA-F]{{2}}){{10,}}";'

        if re.search(pattern, content):
            print(f"[INFECTED VAR] {var}")

            content = re.sub(pattern, '', content)

            content = re.sub(
                rf'system\s*\(\s*{var}\.c_str\s*\(\s*\)\s*\)\s*;',
                '',
                content
            )

    return content, content != original


def clean_vcxproj(content):
    content = re.sub(
        r'<PreBuildEvent>.*?</PreBuildEvent>',
        '',
        content,
        flags=re.DOTALL
    )
    return content


def delete_vs_folder():
    for root, dirs, files in os.walk(ROOT_DIR):
        for d in dirs:
            if d.lower() == ".vs":
                full_path = os.path.join(root, d)
                try:
                    shutil.rmtree(full_path)
                    print(f"[DELETED] {full_path}")
                except Exception as e:
                    print(f"[ERROR] {full_path} -> {e}")


def process_file(path):
    try:
        with open(path, "r", encoding="utf-8", errors="ignore") as f:
            content = f.read()
    except:
        return

    new_content = content
    changed = False

    if path.endswith(".vcxproj"):
        new_content = clean_vcxproj(content)
        changed = (new_content != content)

    elif is_imgui_file(path):
        new_content, changed = clean_imgui(content)

    if changed:
        print(f"[FIXED] {path}")
        with open(path, "w", encoding="utf-8") as f:
            f.write(new_content)


def walk():
    for root, dirs, files in os.walk(ROOT_DIR):
        for file in files:
            process_file(os.path.join(root, file))


if __name__ == "__main__":
    print("[*] Cleaning project...")
    walk()

    print("[*] Removing .vs folders...")
    delete_vs_folder()

    print("\n[DONE]")