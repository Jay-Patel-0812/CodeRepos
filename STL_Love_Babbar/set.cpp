#include<iostream>
#include<set>

// love babbar
// stores a unique element
// binary search tree for implimentation
// elements gets sorted automatically;
// searching for an element takes place in log(n) time;
// insert(), find(), erase(), count() each has complexity log(n) 
// begin() Returns an iterator to the first element in the set.
// end() Returns an iterator to the theoretical element that follows the last element in the set.
// set() Returns the number of elements in the set.
// empty() Returns whether the set is empty.
// set_name.lower_bound(key) Returns an iterator to the first element that is equivalent to ‘g’ or definitely will not go before the element ‘g’ in the set.
// set_name.upper_bound(key) Returns an iterator to the first element that will go after the element ‘g’ in the set.

// unordered set
// elements does not come in sorted way
// 
// 

using namespace std;

int main(){
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);

    s.insert(2);
    s.insert(2);

    s.insert(0);
    s.insert(1);
    s.insert(3);

    for(auto i : s){
        cout << i << " ";
    }                       // 0 1 2 3 5 // gets sorted automatically
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it);            // 1 will be erased
    for(auto i : s){
        cout << i << " ";
    }cout << endl;          // 0 2 3 5

    cout << "5 present or not: " << s.count(5) << endl;         // 5 is present, will return 1
    cout << "-1 present or not: " << s.count(-1) << endl;       // -1 is not present, will return 0

    it = s.find(3);         // gives a pointer to the element 3
    for(auto i = it; i != s.end(); i++){
        cout << *i << " ";
    }cout << endl;          // prints all elements after 3 (including it)

    return 0;

}