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
    int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
        unordered_map<int,stack<int> > mp;
        
        for(int i=0;i<2*e;i+=2){
            mp[A[i]].push(A[i+1]);
        }
        for(int i=0;i<2*e;i+=2){
            if(mp[B[i]].top()!=B[i+1])
                return 0;
            mp[B[i]].pop();
        }
        return 1;
    }
};