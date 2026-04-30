
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
    string intToRoman(int num) {
        map<int, string> mp = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };

        string result = "";
        for (auto it = mp.rbegin(); it != mp.rend(); it++) {
            int value = it->first;
            string sym = it->second;

            while (num >= value) {
                result += sym;
                num -= value;
            }
        }

        return result;
    }
};

// for the debug

int main() {
    Solution sol;
    cout << sol.intToRoman(3) << '\n'; // II
    cout << sol.intToRoman(3749) << '\n'; // MMMDCCXLIX
    cout << sol.intToRoman(58) << '\n'; // LVIII
}
