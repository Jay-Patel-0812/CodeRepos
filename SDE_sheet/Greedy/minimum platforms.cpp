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
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr, arr + n);
    	sort(dep, dep + n);
    	
    	int i = 1, j = 0;
    	int count = 1, mx = 1;
    	
    	while(i < n){
    	    while(dep[j] < arr[i]){
    	        j++;
    	    }
    	    mx = max(mx, i - j + 1);
    	    i++;
    	}
    	
    	return mx;
    }
};