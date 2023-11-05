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
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<long long> s;
        
        s.push(-1);
        long long area = arr[0];
        long long i = 0;
        
        vector<int> left_smaller(n, -1), right_smaller(n, n);
        while (i < n) {
            while (!s.empty() && s.top() != -1
                   && arr[s.top()] > arr[i]) {
                right_smaller[s.top()] = i;
                s.pop();
            }
            if (i > 0 && arr[i] == arr[i - 1]) {
                left_smaller[i] = left_smaller[i - 1];
            }
            else {
                left_smaller[i] = s.top();
            }
            s.push(i);
            i++;
        }
        for (int j = 0; j < n; j++) {
            if(arr[j] * (right_smaller[j] - left_smaller[j] - 1) >= area)
                area = arr[j] * (right_smaller[j] - left_smaller[j] - 1);
            
        }
        return area;
    }
};