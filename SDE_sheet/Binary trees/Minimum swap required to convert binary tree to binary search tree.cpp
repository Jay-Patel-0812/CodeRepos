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
    void helper(deque<int>& dq, vector<int>& A,int ind, int n){
        if(ind >= n)    return;
        helper(dq, A, ind * 2 + 1, n);
        dq.push_back(A[ind]);
        helper(dq, A, ind * 2 + 2, n);
    }
    
  
    int minSwaps(vector<int>&A, int n){
        //Write your code here
        vector<int> nums;
        deque<int> dq;
        
        helper(dq, A, 0, n);
        
        for(int i = 0; i < n; i++){
            nums.push_back(dq.front());
            dq.pop_front();
        }
        
       
	    vector<int> copy(nums);
	    sort(copy.begin(), copy.end());
	    
	    unordered_map<int, int> mp;
	    for(int i =0 ; i < n; i++){
	        mp[copy[i]] = i;
	    }
	    
	    for(int i = 0; i < n; i++){
	        nums[i] = mp[nums[i]];
	    }
	    
	    vector<int> vis(n, 0);
	    
	    
	    int count = 0, ans = 0, start;
	    for(int i = 0; i < n; i++){
	        if(vis[i] == 0){
	            vis[i] = 1;
	            start = i;
	            count = 0;
	            while(nums[i] != start){
	                i = nums[i];
	                vis[i] = 1;
	                count++;
	            }
	            
	            i = start;
	            ans += (count);
	        }
	    }
	    
	    return ans;
    }
    
    
};