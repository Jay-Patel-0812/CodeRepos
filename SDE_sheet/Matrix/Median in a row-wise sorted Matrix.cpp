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

class Solution{   
public:
    int median(vector<vector<int>> &mat, int R, int C){
        // code here 
    //   multiset<pair<int, int> > ms;
    //   for(int i = 0; i < R; i++){
    //       ms.insert(make_pair(mat[i][0], i));
    //   }
      
    //   pair<int, int> temp;
    //   vector<int> loc(R, 1);
      
    //   int node;
    //   int k = (R * C)/2;
      
    //   while(k > 0){
    //       temp = *(ms.begin());
    //       ms.erase(ms.begin());
    //       node = temp.second;
    //       if(loc[node] != C){
    //           ms.insert(make_pair(mat[node][loc[node]], node));
    //           loc[node]++;
    //       }
    //       k--;
    //   }
      
    //   temp = *(ms.begin());
    //   int ans = temp.first;
      
    //   return ans;
        int mn = 0,mx = 0,d = (R*C+1)/2;
        for(int i = 0;i < R;i++){
            mn = min(mn,mat[i][0]);
            mx = max(mx,mat[i][C-1]);
        }
        while(mn < mx){
            int md = (mn+mx)/2,c = 0;
            for(int i = 0;i < R;i++) c += upper_bound(mat[i].begin(),mat[i].end(),md)-mat[i].begin();
            if(d > c) mn = md+1;
            else mx = md;
        }
        
        return mn;
    }
};