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

struct Node {
    int data;
    Node * right, * left;
};

bool solve(Node* root, int low, int high){
    if(!root)   return 0;
    
    if(root->data - 1 == low && root->data + 1 == high)   return 1;
    
    if(solve(root->left, low, min(root->data, high)) || solve(root->right, max(low, root->data), high)){
        return 1;
    }
    
    return 0;
}

bool isDeadEnd(Node *root)
{
    //Your code here
    
    return solve(root, 0, INT_MAX);
}