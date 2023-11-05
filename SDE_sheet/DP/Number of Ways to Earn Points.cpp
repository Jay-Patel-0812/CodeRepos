#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<list>
#include<numeric>
#include<string>
#include<sstream>


using namespace std;
#define ll  long long

#define ll long long
#define mod 1000000007

class Solution {
public:
    int waysToReachTarget(int target, vector<vector<int>>& types) {
        ll n = types.size(), val, count;
        vector<ll> dp(target + 1, 0), prev(target + 1, 0);
        prev[0] = dp[0] = 1;
        
        for(int i = 0; i < n; i++){
            count = types[i][0];
            
            for(int j = 1; j <= count; j++){
                val = types[i][1] * j;
                
                for(int k = 1; k <= target; k++){
                    if(k >= val){
                        dp[k] = (dp[k] + prev[k - val]) % mod;
                    }
                }
            }
            prev = dp;
        }
        
        return dp[target];
        
    }
};