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


#define ll long long

class Solution
{
  public:
  bool isFeasible(int arr[],int n,int k,ll ans){
        ll req=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>ans){
                req++;
                sum=arr[i];
            }
            else sum+=arr[i];
        }
        return (req<=k);
    }
    long long minTime(int arr[], int n, int K)
    {
        // code here
        // return minimum time
        // if(K>n) return -1;
       ll sum=0,mx=0;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           mx=max(mx,1LL * arr[i]);
       }
      if(K >= n)   return mx;
       ll low=mx, high=sum,res=INT_MAX, mid;
       while(low<=high){
           mid=(low+high)/2;
           if(isFeasible(arr,n,K,mid)){
               res=mid;
               high=mid-1;
           }
           else
           low=mid+1;
       }
       return res;
    }
};