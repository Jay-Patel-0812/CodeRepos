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


#include<iostream>


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    multiset<pair<ll, ll> > m;
    pair<ll, ll> temp;
    temp.first = 1, temp.second = 4;
    m.insert(temp);
    temp.first = 4, temp.second = 8;
    m.insert(temp);
    temp.first = 3, temp.second = 1;
    m.insert(temp);
    temp.first = 4, temp.second = 3;
    m.insert(temp);
    temp.first = 2, temp.second = 4;
    m.insert(temp);
    temp.first = 1, temp.second = 4;
    m.insert(temp);
    

    for(auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " "<< it->second << endl;
    }






    return 0;
}