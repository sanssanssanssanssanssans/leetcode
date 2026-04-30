#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define sz(x) (int)x.size()
#define sum(v) accumulate(all(v),0)
#define each(x,v) for(auto&x:v)
#define rep(i,a,b) for(int i=a;i<b;i++)

class Solution {
public:
    vi twoSum(vi& nums, int tar) {
        vi ret;
        bool flag=0;
        rep(i,0,sz(nums)){
            if(flag)break;
            rep(j,i+1,sz(nums)){
                if(nums[i]+nums[j]==tar){
                    ret.pb(i);
                    ret.pb(j);
                    flag=1;
                    break;
                }
            }
        }
        return ret;
    }
};

int main() {
    Solution sol;
    vi nums = {2, 7, 11, 15};
    int target = 9;
    cout << sol.twoSum(nums, target)[0] << ' ' << sol.twoSum(nums, target)[1];
}
