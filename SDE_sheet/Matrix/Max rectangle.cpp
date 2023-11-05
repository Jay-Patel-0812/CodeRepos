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
#define MAX 1000

class Solution{
  public:
    int maxArea(int M[MAX][MAX], int n, int m) {
        // Your code here
        
        for(int i = 1; i < n; i++){
            for(int j = 0; j < m; j++){
                if(M[i][j]){
                    M[i][j] = M[i - 1][j] + 1;
                }
            }
        }
        
        int maxvalue = 0, t;
        
        for(int i = 0; i < n; i++){
            stack<int> st;
            vector<int> left_smaller(m, -1), right_smaller(m, m);
            
            st.push(-1);
            int j = 0;
            while(j < m){
                while(st.top() != -1 && M[i][st.top()] > M[i][j]){
                    right_smaller[st.top()] = j;
                    st.pop();
                }
                if(st.top() != -1 && M[i][st.top()] == M[i][j]){
                    left_smaller[j] = left_smaller[st.top()];
                }
                else{
                    left_smaller[j] = st.top();
                }
                st.push(j);
                j++;
            }
            
            for(j = 0; j < m; j++){
                t = M[i][j] * (right_smaller[j] - left_smaller[j] - 1);
                if(maxvalue < t){
                    maxvalue = t;
                }
            }
        }
        
        return maxvalue;
    }
};