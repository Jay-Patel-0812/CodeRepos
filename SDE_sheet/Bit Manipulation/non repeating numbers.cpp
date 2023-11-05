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

class Solution
{
public:
    vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int n=nums.size();
       int XOR=0;
       for(int i=0;i<n;i++){
           XOR = XOR^nums[i];
       }
       //right most set bit
       int right_bit= XOR & ~(XOR-1);
       int x,y;
        x=0; y=0;
       for(int i=0;i<n;i++)
       {
           if(nums[i]&right_bit){
               x = x^nums[i];
           }
           else
               y = y^nums[i];
       }
         if(x < y) return {x,y};
         else return {y,x};
    }
};