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
    

    multiset<ll> m;


    for(ll i = 1; i < 4; i++){
        for(ll j = 1; j <= i; j++){
            m.insert(i);
        }
    }

    cout << m.size() << endl;

    // if you erase 2 from multiset all entries of 2 will get removed
    m.erase(2);
    cout << m.size() << endl;


    m.insert(2), m.insert(2);
    cout << m.size() << endl;

    multiset<ll>::iterator it;
    it = m.find(2);

    // by using pointer you can remove a single entry of a particular element from the multiset
    m.erase(it);
    cout << m.size() << endl;
    return 0;
}