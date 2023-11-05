#include<iostream>
#include<map>


/* 1 */

// love babbar
// every key is unique, each key points to a same value
// keys gets sorted automatically
// insert(), erase(), find(), count() each has time complexity O(logN) in normal map
// find() Returns an iterator to the element with key-value ‘g’ in the map if found, else returns the iterator to end.
// iterator map_name.insert({key, element})
// count() Returns the number of matches to element with key-value ‘g’ in the map. –> O(log n)
// map_name.upper_bound(key) Returns an iterator to the first element that is equivalent to mapped value with key-value ‘g’ or definitely will go after the element with key-value ‘g’ in the map
// map_name.lower_bound(key) Returns an iterator to the first element that is equivalent to the mapped value with key-value ‘g’ or definitely will not go before the element with key-value ‘g’ in the map –> O(log n)
// map_name.empty() Returns whether the map is empty



/* 2 */

// Map is the part of the STL library that stores key value pairs 
// in it and no two values have the same keys but the different 
// keys can store similar values. The map stores keys in sorted order.

// Now coming to the point that which data structure is used by map. 
// The internal implementation of map is self-balancing Binary Tree. 
// There are generally two methods for implementing a self-balancing binary tree:

// Red-Black Tree and 
// AVL Trees. 

// For map’s internal implementation it uses Red-Black Tree. 

/* 3 */


// unorder map gets implemented through hash table, here searching complexity is O(1)


using namespace std;

bool comp(int a, int b){
    return a > b;
}

int main(){

    map<int, string> m;
    m[1] = "Jay";
    m[7] = "Black";
    m[2] = "Patel";

    // m.insert({3, "icecream"});

    for( auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    cout << "Find key 7:" << m.count(7) << endl;        // 1
    cout << "Find key -1:" << m.count(-1) << endl;      // 0

    m.erase(7);
    for( auto i:m){
        cout << i.first << " " << i.second << endl;
    }

    
    // to make a map which sorts in reverse order using custom funciton
    cout << endl << "custom function:" << endl;
    bool(*fn_pt)(int, int) = comp;
    map<int, string, bool(*)(int, int)> mp (fn_pt);
    mp[1] = "Jay";
    mp[7] = "Black";
    mp[2] = "Patel";
    mp.insert(make_pair(3, "icecream"));

    for( auto i:mp){
        cout << i.first << " " << i.second << endl;
    }

    cout << "map does not have below element:" << endl;
    cout << mp[8] << endl;

    return 0;
}