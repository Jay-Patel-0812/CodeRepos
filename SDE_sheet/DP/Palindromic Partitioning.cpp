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
    int palindromicPartition(string str)
    {
        //where n is length of the string
        int n=str.size();
        //step 1: create a dp matrix
        int dp[n][n]={0};
        
        for(int gap=1;gap<n;gap++)
        {
            for(int row=0,col=gap;row<n-gap;row++,col++)
            {
                //check whether current row and column is palindrome or not
                if(isPalindrome(str,row,col))
                {
                    dp[row][col]=0;
                }else
                {
                    dp[row][col]=INT_MAX;
                    
                    for(int k=row;k<col;k++)
                    {
                        dp[row][col]=min(dp[row][col],1+ dp[row][k]+ dp[k+1][col]);
                    }
                }
            }
        }
        
        return dp[0][n-1];
        
        
    }
    
    
   static bool isPalindrome(string &str,int i,int j)
    {
        while(i<j)
        {
            if(str[i]!=str[j])
            {
                return false;
            }else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};