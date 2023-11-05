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

int LISS(Node *root)
{
    if(!root)   return 0;
    
    Node* temp;
    int mx1 = 1, mxl = 0, mxr = 0, mx2 = 0;
    
    temp = root->left;
    if(temp){
        mx1 += LISS(temp->left);
        mx1 += LISS(temp->right);
        mx2 += LISS(temp);
    }
    
    temp = root->right;
    if(temp){
        mx1 += LISS(temp->left);
        mx1 += LISS(temp->right);
        mx2 += LISS(temp);
    }
    
    return max(mx1, mx2);
}