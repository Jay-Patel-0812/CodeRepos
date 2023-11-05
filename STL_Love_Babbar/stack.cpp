#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<char> s;
    s.push('J');
    s.push('a');
    s.push('y');

    cout << s.size() << endl;       // 3
    cout << s.top() << endl;        // y
    s.pop();
    cout << s.top() << endl;        // a
    cout << s.top() << endl;        // a

    s.pop();
    cout << s.empty() << endl;      // 0
    s.pop();
    cout << s.empty() << endl;      // 1
    

    return 0;
}