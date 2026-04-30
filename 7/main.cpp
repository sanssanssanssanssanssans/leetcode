
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
    int reverse(int x) {
        int result = 0;
        while (x != 0) {
            int dig = x % 10;
            x /= 10;
            if(result > INT_MAX / 10 || result < INT_MIN / 10) return 0;
            if (result == INT_MAX / 10 && dig > 7) return 0;
            if (result == INT_MIN / 10 && dig < -8) return 0;
            result = result * 10 + dig;
        }
        return result;
    }
};

// for the debug

int main() {
    Solution sol;
    cout << sol.reverse(123) << '\n'; // maybe its be a 321
    cout << sol.reverse(-123) << '\n'; // maybe its be a -321
    cout << sol.reverse(120) << '\n'; // maybe its be a 21
    cout << sol.reverse(0) << '\n'; // maybe its be a 0
    cout << sol.reverse(1534236469) << '\n'; // maybe its be a 0
}
