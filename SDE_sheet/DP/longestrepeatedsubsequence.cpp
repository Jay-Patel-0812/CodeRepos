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
		int LongestRepeatingSubsequence(string str){
		    string str2 = str;
		    int n = str.size() + 1;
		    
		    int t[n + 1][n + 1];
		    for(int i = 0; i < n + 1; i++){
		        t[i][0] = 0;
		    }
		    for(int i = 0; i < n + 1; i++){
		        t[0][i] = 0;
		    }
		    
		    for(int i = 1; i < n + 1; i++){
		        for(int j = 1; j < n + 1; j++){
		            if(str[i - 1] == str2[j - 1] && i != j){
		                t[i][j] = 1 + t[i - 1][j - 1];
		            }
		            else{
		                t[i][j] = max(t[i - 1][j], t[i][j - 1]);
		            }
		        }
		    }
		    
		    return t[n][n];
		}

};