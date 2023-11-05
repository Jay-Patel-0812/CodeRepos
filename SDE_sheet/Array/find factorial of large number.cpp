
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

class Node{
    public:
    int data;
    Node *prev;
    Node(int n){
        data = n;
        prev = NULL;
    }
};

class Solution {
public:
    void multiply(Node *tail, int i){
        Node *temp = tail, *prevNode = tail;
        int carry = 0;
        while(temp!=NULL){
            int val = temp->data * i + carry;
            temp->data = val%10;
            carry = val/10;
            prevNode = temp;
            temp = temp->prev;
        }
        
        while(carry!=0){
            prevNode->prev = new Node((int)(carry%10));
            carry /= 10;
            prevNode = prevNode->prev;
        }
    }
    
    void prints(Node *tail, vector<int> &ans){
        while(tail!=NULL){
            ans.push_back(tail->data);
            tail = tail->prev;
        }
    }
public:
    vector<int> factorial(int N){
        Node tail(1);
        
        for(int i=2;i<=N;i++)
        multiply(&tail, i);
        
        vector<int> ans;
        
        prints(&tail,ans);
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};