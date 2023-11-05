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

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        int t = 0;
        temp.push_back(nums[0]);

        vector<int>::iterator it;

        for(int i = 1; i < n; i++){
            if(nums[i] > temp[t]){
                temp.push_back(nums[i]);
                t++;
            }
            else{
                it = lower_bound(temp.begin(), temp.end(), nums[i]);
                *it = nums[i];
            }
        }

        return (t + 1);
    }
};