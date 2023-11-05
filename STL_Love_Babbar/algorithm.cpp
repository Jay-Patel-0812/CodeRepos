#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    vector<int> V;
    V.push_back(7);
    V.push_back(1);
    V.push_back(0);
    V.push_back(3);
    V.push_back(2);
    V.push_back(1);

    sort(V.begin(), V.end());       // sort is based upon introsort(combination of quicksort, heapsort), followed by insertion sort

    cout << "finding 8:" << binary_search(V.begin(), V.end(), 8) << endl;

    cout << "lower bound:" << lower_bound(V.begin(), V.end(), 1) - V.begin() << endl;
    cout << "upper bound:" << upper_bound(V.begin(), V.end(), 1) - V.begin() << endl;

    string str = "black";
    reverse(str.begin(), str.end());
    cout << str << endl;

    reverse(V.begin(), V.end());
    for(auto i : V){
        cout << i << " ";
    }cout << endl;

    rotate(V.begin(), V.begin() + 3, V.end());
    for(auto i : V){
        cout << i << " ";
    }cout << endl;

    return 0;
}