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
    int pageFaults(int n, int c, int pages[]){
        // code here
        map<int,int> mp;
        int cnt=0;
        for(int i=0; i<n; i++){
            if(mp.find(pages[i])==mp.end()){
                mp[pages[i]]=i;
                cnt++;
                int mini=INT_MAX;
                if(mp.size()>c){
                    for(auto it:mp){
                        // cout<<it<<endl;
                        mini = min(it.second,mini);
                    }
                    mp.erase(pages[mini]);
                }
            }else{
                mp[pages[i]]=i;
            }
        }
        return cnt;
    }
};