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
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        // your code here
        int el=0,cnt=0;
        
        for(int i=0;i<size;i++)
        {
            if(cnt==0)
                el=a[i];
            if(el==a[i])
                cnt++;
            else
                cnt--;
        }
        int cnt2=0;
        for(int i=0;i<size;i++)
        {
            if(el==a[i])
                cnt2++;
            if(cnt2>size/2)
                return el;
        }
        return -1;
    }
};