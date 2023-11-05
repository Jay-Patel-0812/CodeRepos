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
    //Function to find minimum number of pages.
     bool isFeasible(int arr[],int n,int k,int ans){
        int req=1,sum=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>ans){
                req++;
                sum=arr[i];
            }
            else sum+=arr[i];
        }
        return (req<=k);
    }
    int findPages(int arr[], int n, int K) 
    {
        if(K>n) return -1;
       int sum=0,mx=0;
       for(int i=0;i<n;i++){
           sum+=arr[i];
           mx=max(mx,arr[i]);
       }
       int low=mx, high=sum,res=0;
       while(low<=high){
           int mid=(low+high)/2;
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