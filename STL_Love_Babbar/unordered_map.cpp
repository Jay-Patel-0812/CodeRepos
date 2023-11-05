#include<iostream>
#include<unordered_map>

// GFG
// unordered_map is an associated container that stores elements formed by the combination of 
// key-value and a mapped value. 
// The key value is used to uniquely identify the element and the mapped value is the content 
// associated with the key. 
// Both key and value can be of any type predefined or user-defined. 

// Internally unordered_map is implemented using Hash Table, the key provided to map are 
// hashed into indices of a hash table that is why the performance of data structure depends on 
// hash function a lot but on an average, the cost of search, insert and delete from the hash 
// table is O(1).

// begin(): Returns an iterator pointing to the first element in the container in the unordered_map container
// end(): Returns an iterator pointing to the position past the last element in the container in the unordered_map container
// count(): Count the number of elements present in an unordered_map with a given key.
// find(): Returns iterator to element.
// erase(): erase elements in the container in the unordered_map container
// empty(): checks whether container is empty in the unordered_map container


using namespace std;

int main(){

    unordered_map<int, string> m;
    m[1] = "Jay";
    m[7] = "Black";
    m[2] = "Patel";

    // m.insert({3, "icecream"});

    for( auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Find key 7:" << m.count(7) << endl;
    cout << "Find key -1:" << m.count(-1) << endl;

    m.erase(7);
    for( auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}