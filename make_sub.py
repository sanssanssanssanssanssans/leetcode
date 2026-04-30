import os
name = input()

# name 폴더의 main.cpp을 읽어옴
code = []
for line in open(f"{name}/main.cpp", "r", encoding="utf-8").readlines():
    code.append(line)

# 코드에서 main함수 부분을 찾아서 main 함수 이후의 코드를을 제거해야함
main_index = -1
for i in range(len(code)):
    if "int main()" in code[i]:
        main_index = i
        break

code = code[:main_index]

# submit/앞에 있는 숫자.cpp로 저장
# 만약 없으면, 생성
submit_folder = "submit"
if not os.path.exists(submit_folder):
    os.makedirs(submit_folder)

submit_path = os.path.join(submit_folder, f"{name}.cpp")
with open(submit_path, "w", encoding="utf-8") as file:
    file.write("".join(code))