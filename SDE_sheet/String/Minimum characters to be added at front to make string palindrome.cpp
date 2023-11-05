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

bool isP(string s){
    int n = s.size();
    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n - 1 - i]){
            return 0;
        }
    }
    return 1;
}

class Solution {
public:
    int minChar(string s){
        if(isP(s))  return 0;
        string r = s;
        reverse(r.begin(), r.end());
        int n = s.size();
        vector<int> match2(n, 0), match1(n, 0);
        
        int i = 1, j = 0;
        
        while(i < n){
            if(s[j] == s[i]){
                match1[i] = j + 1;
                j++, i++;
            }
            else{
                if(j == 0){
                    match1[i] = 0;
                    i++;
                }
                else{
                    j = match1[j - 1];
                }
            }
        }
        
        i = 1, j = 0;
        
        while(i < n){
            if(s[j] == r[i]){
                match2[i] = j + 1;
                j++, i++;
            }
            else{
                if(j == 0){
                    match2[i] = 0;
                    i++;
                }
                else{
                    j = match1[j - 1];
                }
            }
        }
        
        return n - match2[n - 1];
        
    }
};