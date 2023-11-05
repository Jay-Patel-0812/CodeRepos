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


class Solution{
    public:
    // n: input to count the number of set bits
    //Function to return sum of count of set bits in the integers from 1 to n.
    int countSetBits(int n)
    {
        // Your logic here
        
        int t = n;
        
        int div = 2, sum = 0;

        if(n%2){
            sum += 1;
        }
        
        int ind = 1;
        while(div <= n){
            if(div & n){
                sum += (ind * (div/2));
                sum += ((n%div) + 1);
            }
            div *= 2;
            ind++;
        }
        
        return sum;
    }
};