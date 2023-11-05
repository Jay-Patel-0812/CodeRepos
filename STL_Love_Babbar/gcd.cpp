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

#define ll long long

using namespace std;

ll gcd(ll a, ll b){
    if (b == 0)
       return a;
    return gcd(b, a % b); 
}





int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cout << gcd(-3, 9) << endl;
    cout << gcd(-9, 3) << endl;
    cout << gcd(-9, 9) << endl;

    cout << gcd(0, 4) << endl;

    return 0;
}