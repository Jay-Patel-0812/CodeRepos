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
    vector<int> maximumSumQueries(vector<int>& nums1, vector<int>& nums2, vector<vector<int>>& queries) {
        vector<vector<int>> v;
        int i = 0, n = queries.size();
        for(i = 0; i < n; i++){
            v.push_back({queries[i][0],queries[i][1],i});
        }
        sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
            if(a[0]==b[0])return a[1]<b[1];
            return a[0]<b[0];
        });
        priority_queue<vector<int>> pq1,pq;
        
        for(i = 0; i < nums1.size(); i++){
            pq.push({nums1[i]+nums2[i],nums1[i],nums2[i]});
        }
        
        vector<int> ans(n,-1);
        for(auto &i: v){
            while(!pq.empty()){
                if(pq.top()[1]<i[0]){
                    pq.pop();
                }else if( pq.top()[2]<i[1]){
                    pq1.push(pq.top());
                    pq.pop();
                }else{
                    break;
                }
            }
            if(!pq.empty()){
                ans[i[2]] = pq.top()[0];
            }
            while(!pq1.empty()){
                pq.push(pq1.top());
                pq1.pop();
            }
        }
        return ans;
    }
};