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

class Solution
{
    public:
        int cnt(int n){
            int d=5;
            int c=0;
            while(d<=n){
                c+=n/d;
                d*=5;
            }
            return c;
        }
        int findNum(int n)
        {
            int lo=0, hi=n*5;
            int ans=0;
            while(lo<=hi){
                int m = lo + (hi-lo)/2;
                int fvs = cnt(m);
                if(fvs>=n)ans=m,hi=m-1;
                else lo = m+1;
            }
            return ans;
        }
};

