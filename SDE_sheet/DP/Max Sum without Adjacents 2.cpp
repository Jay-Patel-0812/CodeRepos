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
  int findMaxSum(vector<int>& a){
      //Code Here
      int n = a.size();
      vector<vector<int> > dp(n, vector<int> (3, -1));
      
    //   solve(dp, a, 0, n, 0);
      dp[0][0] = 0, dp[0][1] = a[0], dp[0][2] = a[0];
      if(n == 1){
          return a[0];
      }
      
        
      for(int i = 1; i < n; i++){
          dp[i][0] = max(dp[i - 1][2], max(dp[i - 1][1], dp[i - 1][0]));
          dp[i][1] = dp[i - 1][0] + a[i];
          dp[i][2] = dp[i - 1][1] + a[i];
      }
      
      
      return max(dp[n - 1][0], max(dp[n - 1][1], dp[n - 1][2]));
      
  }
};
