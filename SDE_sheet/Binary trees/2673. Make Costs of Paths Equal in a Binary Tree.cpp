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
    int minIncrements(int n, vector<int>& cost) {
        int count = (n + 1)/2, ans = 0, mx, index = n - 1;
        
        while(count > 1){
            for(int i = index; i > index - count; i-=2){
                if(cost[i] != cost[i - 1]){
                    ans += abs(cost[i] - cost[i - 1]);
                }
                cost[(i - 1)/2] += (max(cost[i], cost[i - 1]));
            }
            
            index = index - count;
            count /= 2;
        }
        
        return ans;
    }
};