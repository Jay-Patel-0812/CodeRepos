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
#define ll  long long int

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        
        int ans = arr[n - 1] - arr[0];
        
        int mx, mn;
        
        for(int i = 1; i < n; i++){
            if(arr[i] - k < 0)
                continue;
                
            mx = max(arr[i - 1] + k, arr[n - 1] - k);
            mn = min(arr[0] + k, arr[i] - k);
            if(ans > mx - mn){
                ans = mx - mn;
            }
        }
        
        return ans;
    }
};