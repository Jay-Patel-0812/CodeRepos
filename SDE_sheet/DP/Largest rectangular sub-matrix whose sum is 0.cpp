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
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      
      int n = a.size(), m = a[0].size();
      
      
      int up = 0, down = -1, start = 0, end = -1, max_size = 0;
      
      for(int i = 0; i < m; i++){
          vector<int> temp(n, 0);
          for(int j = i; j < m; j++){
              for(int k = 0; k < n; k++){
                  temp[k] += a[k][j];
              }
              
              if(helper(temp, up, down, max_size, i, j, n)){
                  start = i;
                  end = j;
              }
          }
      }
      vector<vector<int> > ans;
      
      for(int i = up; i <= down; i++){
          vector<int> V;
          for(int j = start; j <= end; j++){
              V.push_back(a[i][j]);
          }
          ans.push_back(V);
      }
      
      return ans;
  }
  
  bool helper(vector<int>& temp, int& up, int& down, int& max_size, int i,int  j, int n){
      int sum = 0, max_length = 0, old, fup, fdown;
      map<int, int> mp;
      bool B = 0;
    //   mp[0] = 0;
      
      for(int k = 0; k < n; k++){
          sum += temp[k];
          old = max_length;
        //   fup = -1, fdown = -1;
          
          if(temp[k] == 0 && !max_length){
              max_length = 1;
              fup = k;
              fdown = k;
          }
          
          if(sum == 0){
              if(k + 1 > max_length){
                  max_length = k + 1;
                  fup = 0;
                  fdown = k;
              }
          }
          
          if(mp.count(sum)){
              if(k - mp[sum] > max_length){
                  fup = mp[sum] + 1;
                  fdown = k;
                  max_length = k - mp[sum];
              }
          }
          else{
              mp[sum] = k;
          }
          
          if(max_length > old){
              if(max_length * (j - i + 1) > max_size){
                  B = 1;
                  down = fdown;
                  up = fup;
                  max_size = max_length * (j - i + 1);
              }
          }
          
      }
      return B;
  }
};

