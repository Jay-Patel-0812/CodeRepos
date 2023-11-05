
// love babbar: 
// not a contiguous storage location
// multiple fixed static arrays
// dynamic, size can increase
// random access possible


// GFG:
// Double-ended queues are sequence containers with the feature of expansion and contraction on both ends. 
// They are similar to vectors, but are more efficient in case of insertion and deletion of elements. Unlike vectors, contiguous storage allocation may not be guaranteed. 
// Double Ended Queues are basically an implementation of the data structure double-ended queue. 
// A queue data structure allows insertion only at the end and deletion from the front. This is like a queue in real life, wherein people are removed from the front and added at the back. 
// Double-ended queues are a special case of queues where insertion and deletion operations are possible at both the ends.
// The functions for deque are same as vector, with an addition of push and pop operations for both front and back.  

// The time complexities for doing various operations on deques are-

// Accessing Elements- O(1)
// Insertion or removal of elements- O(N)
// Insertion or removal of elements at start or end- O(1)


#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> d;
    d.push_back(1);         // pop_back()
    d.push_front(2);        // pop_front()

    for(int i : d){
        cout << i << " ";
    }cout << endl;

    // d.pop_back(); // pop_front() is also available
    // for(int i : d){
    //     cout << i << " ";
    // }cout << endl;

    cout << "Print First index element:" << d.at(1) << endl;
    cout << d[0]<< " " <<d[1] << endl;
    cout << "front" << d.front() << endl;
    cout << "back" << d.back() << endl;

    cout << d.empty() << endl; // 0 if not empty, 1 if empty

    deque<int>::iterator it = d.begin();

    cout << "before erase: " << d.size() << endl;
    d.erase(it, it + 1);
    cout << "after erase: " << d.size() << endl;

    return 0;
}