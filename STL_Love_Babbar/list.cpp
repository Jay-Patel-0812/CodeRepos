#include<iostream>
#include<list>

// lovebabbar
// list stl is made using doubly linked list

// gfg
// begin() O(1) function returns an iterator pointing to the first element of the list.
// end() O(1) function returns an iterator pointing to the theoretical last element which follows the last element.
// empty() O(1) Returns whether the list is empty(1) or not(0).
// insert(pos_iter, ele_num, ele) Inserts new elements in the list before the element at a specified position.
// erase() O(N) 
// iterator list_name.erase(iterator position)
// iterator list_name.erase(iterator first, iterator last), This erases all the elements in the range including the element pointed by the iterator first but excluding the element pointed by the iterator last.
// list_name.remove(val) 
// size()
// list_name.reverse() Reverses the list
// listname.sort() Sorts the list in increasing order.
// front() Returns the value of the first element in the list.
// back() Returns the value of the first element in the list.


using namespace std;

int main(){
    list<int> l;

    l.push_back(1);     // pop_back
    l.push_front(2);    // pop_front

    list<int> copy(l); // copies the list l to copy, erasing or adding in l will not affect copy

    for(int i : l){
        cout << i << " ";
    }cout << endl;

    list<int>::iterator it = l.begin();
    
    l.erase(l.begin());
    cout << "after erase" << endl;
    for(int i : l){
        cout << i << " ";
    }cout << endl;

    // l.size()

    for(int i : copy){
        cout << i << " ";
    }cout << endl;

    list<int> n(5, 10);         // 5 elements, value = 10
    for(int i : n){
        cout << i << " ";
    }cout << endl;  


    return 0;
}

