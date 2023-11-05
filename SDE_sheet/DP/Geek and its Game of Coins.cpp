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
	int findWinner(int N, int X, int Y)
	{
		vector<int> dp(n+1,0);
         dp[0]=0;
         for(int i=0;i<=n;++i){
             if(dp[i]==0){
                 if(i+1<=n) dp[i+1]=1;
                 if(i+x <= n) dp[i+x]=1;
                 if(i+y <= n) dp[i+y]=1;
             }
         }
         return dp[n];
	}

};