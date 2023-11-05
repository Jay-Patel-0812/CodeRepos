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
    int minJumps(int arr[], int n){
        // Your code here
         int jump=0;
        int pos=0;
        int des=0;
        
        for(int i=0;i<n-1;i++)
          {
              if( i == pos && arr[pos] == 0 && pos == des) return -1;
              des=max(des,arr[i]+i);
              if(pos==i)
              { 
                   pos=des;
                   jump++;
              }
              
          }
          return jump;
    }
};