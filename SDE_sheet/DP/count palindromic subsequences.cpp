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

#define mod 1000000007

class Solution{
    public:
    /*You are required to complete below method */
    long long int  countPS(string str)
    {
       int n = str.size();
       vector<vector<int> > dp(n, vector<int> (n, -1));
       
       dp[0][n - 1] = solve(dp, 0, n - 1, str);
       
       return dp[0][n - 1];
    }
    
    long long int solve(vector<vector<int> >& dp, int i, int j, string& str){
        if(i > j){
            return 0;
        }
        if(i == j)  return 1;
        
        if(dp[i][j] != -1)  return dp[i][j];
        
        if(str[i] == str[j]){
            dp[i][j] = (1 +  solve(dp, i + 1, j, str)%mod + solve(dp, i, j - 1, str)%mod + mod) % mod;
        }
        else{
            dp[i][j] = (solve(dp, i + 1, j, str)%mod + solve(dp, i, j - 1, str)%mod - solve(dp, i + 1, j - 1, str)%mod + mod) % mod;
        }
        
        return dp[i][j];
    }
     
};