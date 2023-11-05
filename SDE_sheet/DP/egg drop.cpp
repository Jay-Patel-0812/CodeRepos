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



class Solution
{
    public:
    int t[201][201]; //Cache momory for fast response
    
    int helper(int eggs, int floors){
        // Base Cases
        // If we reach at the bottom then return that
        if(floors == 0 || floors == 1) return floors;
        
        // If we have just one eggs we can't experiment more
        if(eggs == 1) return floors;
        
        // If sub Problem is already calculated then return from there
        if(t[eggs][floors] != -1) return t[eggs][floors];
        
        int ans = INT_MAX; // Create ans varible with max value
         
        // Just using MCM fomat
        for(int k=1;k<=floors;k++){
            int temp = 1 + max(helper(eggs-1, k-1), helper(eggs, floors-k));
            
            ans = min(ans, temp);
        }
        return t[eggs][floors] = ans;
    }
    
    int eggDrop(int n, int k) {
        memset(t, -1, sizeof(t)); // Initislize with all '-1'
        return helper(n, k); // Call our servent - helper function
    }
};