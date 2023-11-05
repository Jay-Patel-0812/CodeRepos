#include<iostream>
#include<queue>
#include<vector>


#define ll long long

// How to conert an array to vector:


// int arr[] = { 10, 20, 30, 30, 30, 40, 50 };
//     int n = sizeof(arr)/ sizeof(int);
//     vector<int> v(arr, arr + n);



using namespace std;

int main(){

    vector<int> V;
    

    cout << "capacity:" << V.capacity() << endl;

    V.push_back(1);
    cout << "capacity:" << V.capacity() << endl;

    V.push_back(2);
    cout << "capacity:" << V.capacity() << endl;

    V.push_back(3);
    cout << "capacity:" << V.capacity() << endl;

    V.push_back(4);
    cout << "capacity:" << V.capacity() << endl;

    V.push_back(5);
    cout << "capacity:" << V.capacity() << endl;
    cout << V.size() << endl;

    cout << "element at index 2:" << V.at(2) << endl;

    cout << "front: " << V.front() << endl;
    cout << "back: "<< V.back() << endl;

    cout << "before pop:" << endl;

    for(int i:V){
        cout << i << " ";
    }cout << endl;

    V.pop_back();
    cout << "after pop:" << endl;

    for(int i:V){
        cout << i << " ";
    }cout << endl;

    // V.clear();      // removes all the elements from the vector, size decreases but capacity will not change.
    // cout << "size:" << V.size() << "  capacity:" << V.capacity() <<endl;
    
    vector<int>::iterator it;
    it = V.begin();         // points at the starting element  // This function returns a bidirectional iterator pointing to the first element.  
    cout << *it << endl; 
    it = V.end();           // point at the end, not the end element    // end() function is used to return an iterator pointing next to last element of the vector container. end() function returns a bidirectional iterator.
    cout << *it << endl;

    // below code will print the whole vector
    // for (auto it = V.begin();
    //      it != V.end(); ++it)
    // cout << ' ' << *it;

    int size = 10;
    int initializing_value = 7;
    vector<int> V1(size);
    vector<int> V2(size, initializing_value);

    vector<int> V3(V);      // will copy the vector V in V3
    for (auto it = V3.begin();it != V3.end(); ++it)
        cout << ' ' << *it;


    V3.erase(V3.begin());       // to erase the first element of the vector
    cout << endl;

    for (auto it = V3.begin();it != V3.end(); ++it)
        cout << ' ' << *it;

    V3.clear();     // to remove all elements from the vector
    cout << endl << V3.size() << endl;


    // how to append a vector at the beginning;

    vector<ll> V4(4, 4);
    vector<ll> V5(5, 5);

    V4.insert(V4.begin(), V5.begin(), V5.end());
    for(ll i = 0; i < V4.size(); i++){
        cout << V4[i] << " ";           // 5 5 5 5 5 4 4 4 4
    }cout << endl;

    // how to append a vector at the end;
    V4.insert(V4.end(), V5.begin(), V5.end());
    for(ll i = 0; i < V4.size(); i++){
        cout << V4[i] << " ";           // 5 5 5 5 5 4 4 4 4 5 5 5 5 5    
    }


    return 0;
}