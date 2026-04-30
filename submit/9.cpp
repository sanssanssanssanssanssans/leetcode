
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
    bool isPalindrome(int x) {
        if (x < 0) return false;
        string s = to_string(x), tmp = s;
        reverse(all(tmp));
        return s == tmp;
    }
};

// for the debug

