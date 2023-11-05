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

int max(int a, int b){
    if(a > b)   return a;
    return b;
}

class Solution{
    public:
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
          multiset<pair<int, pair<int, int> > > ms;
          int mx = 0;
          
          for(int i = 0; i < k; i++){
              ms.insert(make_pair(arr[i][0], make_pair(i, 0)));
              mx = max(mx, arr[i][0]);
          }
          
          int t, i, j;
          pair<int, int> ans;
          pair<int, pair<int, int> > temp;
          ans.first = (*ms.begin()).first;
          ans.second = mx;
          
          while(1){
              temp = *(ms.begin());
              ms.erase(ms.begin());
              
              if(mx - temp.first < ans.second - ans.first){
                  ans.second = mx;
                  ans.first = temp.first;
              }
              if(temp.second.second == n - 1){
                  break;
              }
              else{
                  
                  i = temp.second.first;
                  j = temp.second.second + 1;
                  t = arr[i][j];
                  mx = max(mx, t);
                  ms.insert(make_pair(t, make_pair(i, j)));
              }
          }
          
          return ans;
    }
};