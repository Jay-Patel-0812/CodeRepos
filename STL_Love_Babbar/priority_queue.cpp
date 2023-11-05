#include<iostream>
#include<queue>

// love babbar
// default priority queue is max heap

// pqname.size()
// pqname.empty()
// top();
// pop()
// push()

using namespace std;

int main(){
    priority_queue<int> maxi;     // max heap, first element is greatest
    priority_queue<int, vector<int>, greater<int> > mini; // min heap;

    maxi.push(1);
    maxi.push(2);
    maxi.push(1);
    maxi.push(0);
    maxi.push(3);

    ////    below code will give error, because maxi.size() is changing every time the loop runs
    // for(int i = 0; i < maxi.size(); i++){
    //     cout << maxi.top() << " " << endl;
    //     maxi.pop();
    // }

    int n = maxi.size();
    /*
    do not use maxi.size() in a for loop
    */
    for(int i = 0; i < n; i++){             
        cout << maxi.top() << " " ;
        maxi.pop();
    }
    cout << endl;

    mini.push(1);
    mini.push(2);
    mini.push(1);
    mini.push(0);
    mini.push(3);

    /*
    do not use mini.size() in a for loop
    */

    n = mini.size();
    for(int i = 0; i < n; i++){
        cout << mini.top() << " ";
        mini.pop();
    }cout << endl;


    cout << mini.empty() << endl;

    return 0;
}