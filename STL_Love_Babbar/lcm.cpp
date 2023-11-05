#include<vector>
#include<iostream>
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
#define ll long long


using namespace std;

int getGCD( int n1, int n2)  
{  
    if (n1 == 0)  
    {  
        return n2;        
    }  
  
return getGCD(n2 % n1, n1);  
}  
  
// define the getLCM function to return the LCM  
int getLCM( int n1, int n2)  
{  
    return (n1 / getGCD(n1, n2)) * n2;  
}  