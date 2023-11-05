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
#define ll long long


using namespace std;

template<typename T>

class BinaryTreeNode 
{
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) 
    {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};