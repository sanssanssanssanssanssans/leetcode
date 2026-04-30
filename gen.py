import os

TEMPLATE = """
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define sz(x) (int)x.size()

class Solution {
public:
    
};

// for the debug

int main() {
    Solution sol;
}
"""

BAT_TEMPLATE = """@echo off
g++ -std=c++17 -O2 -o main.exe main.cpp
"""

def sanitize(name : str) -> str:
    return name.strip().replace(" ", "_")

name = input("name : ")
folder = sanitize(name)

if not folder:
    print("invalid")
    quit()

if os.path.exists(folder):
    print("Folder is already exist")
    quit()

os.makedirs(folder)

path = os.path.join(folder, "main.cpp")
with open(path, "w") as file:
    file.write(TEMPLATE)

path = os.path.join(folder, "build.bat")
with open(path, "w") as file:
    file.write(BAT_TEMPLATE)


print(f"Created {folder}/main.cpp")