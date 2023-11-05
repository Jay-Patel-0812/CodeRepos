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
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        deque<int> dq;
        vector<int> V;
        
        dq.push_back(0);
        
        for(int i = 1; i < k; i++){
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        V.push_back(arr[dq.front()]);
        
        for(int i = k; i < n; i++){
            if(dq.front() == (i - k)){
                dq.pop_front();
            }
            while(!dq.empty() && arr[dq.back()] < arr[i]){
                dq.pop_back();
            }
            dq.push_back(i);
            V.push_back(arr[dq.front()]);
        }
        
        return V;
    }
};