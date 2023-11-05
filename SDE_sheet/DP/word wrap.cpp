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

class Solution {
public:
int n;
vector<int> dp;
    int f(int idx, int K, vector<int> &nums) {
        int ans = INT_MAX, k = K;
        if(dp[idx] != -1)   return dp[idx];
        
        for(int i = idx; i < n; i++){
            k -= nums[i];
            if(k >= 0){
                if(i == n - 1)    return 0;
                ans = min(ans, k * k  + f(i + 1, K, nums));
            }
            else{
                break;
            }
            k--;
        }
        
        return dp[idx] = ans;
    }
    int solveWordWrap(vector<int>nums, int k) 
    {
        n = nums.size();
        dp.resize(n, -1);
        return f(0, k, nums);
    } 
    
    
};