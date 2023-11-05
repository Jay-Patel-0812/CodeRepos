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
#define ll  long long int


void solve(){
    ll w, h, n;
    cin >> w >> h >> n;

    vector<int> W(w + 1, 0), H(h + 1, 0);
    ll x, y;
    for(int i = 0; i < n; i++){
        cin >> x >> y;
        W[x] = 1, H[y] = 1;
    }

    ll maxh = 0, maxw = 0, countx = 0, county = 0;

    for(int i = 1; i <= w; i++){
        if(!W[i]){
            countx++;
        }
        else{
            if(countx > maxw){
                maxw = countx;
            }
            countx = 0;
        }
    }

    for(int i = 1; i <= h; i++){
        if(!H[i]){
            county++;
        }
        else{
            if(county > maxh){
                maxh = county;
            }
            county = 0;
        }
    }
    // cout << maxh << endl << maxw << endl;
    cout << maxh * maxw << endl;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test_cases;
    cin >> test_cases;

    while(test_cases > 0){
        // cout << "test case:"<< test_cases << endl;
        solve();
        test_cases--;
    }

    return 0;
}