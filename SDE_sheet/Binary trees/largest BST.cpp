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
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    
    static pair<int, pair<int, int>> solve(Node* root, int& mx){
        if(!root->left && !root->right){
            return make_pair(1, make_pair(root->data, root->data));
        }
        
        
        pair<int, pair<int, int> > t1, t2;
        
        if(root->left && root->right){
            t1 = solve(root->left, mx);
            t2 = solve(root->right, mx);
            if(root->data > t1.second.second && root->data < t2.second.first){
                mx = max(mx, 1 + t1.first + t2.first);
                return make_pair(1 + t1.first + t2.first, make_pair(t1.second.first, t2.second.second));
            }
            return make_pair(0, make_pair(INT_MIN, INT_MAX));
        }
        else if(root->left){
            t1 = solve(root->left, mx);
            if(root->data > t1.second.second){
                mx = max(mx, 1 + t1.first);
                return make_pair(1 + t1.first, make_pair(t1.second.first, root->data));
            }
            return make_pair(0, make_pair(INT_MIN, INT_MAX));
        }
        else{
            t2 = solve(root->right, mx);
            if(root->data < t2.second.first){
                mx = max(mx, 1 + t2.first);
                return make_pair(1 + t2.first, make_pair(root->data, t2.second.second));
            }
            return make_pair(0, make_pair(INT_MIN, INT_MAX));
        }
        
    }
    
    int largestBst(Node *root)
    {
        int mx = 0;
        if(root)    mx = 1;
    	solve(root, mx);
    	
    	return mx;
    }
};