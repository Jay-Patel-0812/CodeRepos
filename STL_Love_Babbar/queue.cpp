#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string> q;

    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout << q.size() << endl;       // 3
    cout << q.front() << endl;      // love
    cout << q.front() << endl;      // love
    q.pop();
    cout << q.front() << endl;      // babbar
    q.pop();
    cout << q.front() << endl;      // kumar
    cout << q.empty() << endl;      // 0
    q.pop();                        
    cout << q.size() << endl;       // 0
    cout << q.empty() << endl;      // 1


    return 0;
}