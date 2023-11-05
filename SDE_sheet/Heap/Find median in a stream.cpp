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
    private:
    priority_queue<int> maxi;
    priority_queue<int, vector<int>, greater<int> > mini;
    
    public:
    //Function to insert heap.
    void insertHeap(int &x)
    {
        if(mini.empty() && maxi.empty()){
            mini.push(x);
        }
        else if(x >= mini.top()){
            mini.push(x);
        }
        else{
            maxi.push(x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        int t;
        while(mini.size() > maxi.size()){
            t = mini.top();
            mini.pop();
            maxi.push(t);
        }
        while(maxi.size() > mini.size()){       // in case of odd number of elements mini will always have a greater size
            t = maxi.top();
            maxi.pop();
            mini.push(t);
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if(mini.size() == maxi.size()){
            return (mini.top() + maxi.top())/2;
        }
        else{
            return mini.top();
        }
    }
};