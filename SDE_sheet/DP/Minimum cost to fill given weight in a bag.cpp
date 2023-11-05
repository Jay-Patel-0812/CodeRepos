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

class Solution{
		

	public:
	int minimumCost(int cost[], int N, int W) 
	{ 
        vector<vector<int> > dp(N + 1, vector<int> (W + 1, INT_MAX));
        
        solve(dp, N, W, cost);
        
        if(dp[N][W] == INT_MAX) return -1;
        return dp[N][W];
	} 
	
	int solve(vector<vector<int> >& dp, int N, int W, int cost[]){
	    if(W == 0)  return 0;
	    if(W < 0 || N == 0)   return INT_MAX;
	    if(W == 1){
	        if(cost[0] != -1){
	            return cost[0];
	        }
	        else{
	            return INT_MAX;
	        }
	    }
	    
	    if(dp[N][W] != INT_MAX)  return dp[N][W];
	    
	    int temp = solve(dp, N - 1, W, cost);
	    if(temp != INT_MAX)
	        dp[N][W] = min(dp[N][W], temp);
	    
	    if(cost[N - 1] != -1 && solve(dp, N - 1, W - N, cost) != INT_MAX){
	        temp = cost[N - 1] + solve(dp, N - 1, W - N, cost);
	        dp[N][W] = min(dp[N][W], temp);
	    }
	    
	    if(cost[N - 1] != -1 && solve(dp, N, W - N, cost) != INT_MAX){
	        temp = cost[N - 1] + solve(dp, N, W - N, cost);
	        dp[N][W] = min(dp[N][W], temp);
	    }
	    
	    return dp[N][W];
	}
};