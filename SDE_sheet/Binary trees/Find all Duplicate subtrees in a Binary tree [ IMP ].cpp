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
	struct Node* left, *right;
};

string dfs(Node *root, unordered_map<string, pair<Node *, int>> &mp)
{
    if (!root)
        return "";

    string l = dfs(root->left, mp);
    string r = dfs(root->right, mp);

    string s = to_string(root->data) + "#" + l + "#" + r;
    if (mp.find(s) != mp.end())
    {
        mp[s].second++;
    }
    else
    {
        mp[s].first = root;
        mp[s].second = 1;
    }

    return s;
}
vector<Node *> printAllDups(Node *root)
{
    unordered_map<string, pair<Node *, int>> mp;
    dfs(root, mp);
    vector<Node *> ans;
    for (auto i : mp)
        if (i.second.second >= 2)
            ans.push_back(i.second.first);
    return ans;
}