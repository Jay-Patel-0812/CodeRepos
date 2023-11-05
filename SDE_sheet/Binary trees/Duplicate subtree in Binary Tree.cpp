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

struct Node
{
  char data;
  struct Node* left;
  struct Node* right;
};

class Solution {
  public:
    unordered_map<string,int> m;
    string helper(Node* root)
    {
        if(root==NULL)
        return "$";
        string s="";
        if(root->left==NULL && root->right==NULL)
        {
            s=to_string(root->data);
            
            return s;
        }
        
        
        s+=to_string(root->data);
        s+=".";
        
        s+=helper(root->left);
        s+=".";
        
        s+=helper(root->right);
        s+=".";
        
        m[s]++;
        
        
        return s;
    }
    int dupSub(Node *root) {
         // code here
         m.clear();
         helper(root);
         for(auto i:m)
         {
             if(i.second>=2)
             return true;
         }
         
         return false;
    }
};