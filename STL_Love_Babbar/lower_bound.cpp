#include <vector>
#include<iostream>

using namespace std;
  
// Driver code
// you can use lower bound on set<int> data structure also, it returns a pointer, as below:

// The set elements are: 1 2 4 5 6 
// The lower bound of key 2 is 2            // s.lower_bound(2)
// The lower bound of key 3 is 4            // s.lower_bound(3)

int main()
{
    // Input vector
    int arr[] = { 10, 20, 30, 30, 30, 40, 50 };
    int n = sizeof(arr)/ sizeof(int);
    vector<int> v(arr, arr + n);
  
    // Print vector
    std::cout << "Vector contains :";
    for (unsigned int i = 0; i < v.size(); i++)
        std::cout << " " << v[i];
    std::cout << "\n";
  
    std::vector<int>::iterator low1, low2, low3;
      
    // std :: lower_bound
    low1 = std::lower_bound(v.begin(), v.end(), 30);
    low2 = std::lower_bound(v.begin(), v.end(), 35);
    low3 = std::lower_bound(v.begin(), v.end(), 55);
  
    // Printing the lower bounds
    std::cout
        << "\nlower_bound for element 30 at position : "    // 2
        << (low1 - v.begin());
    std::cout
        << "\nlower_bound for element 35 at position : "    // 5
        << (low2 - v.begin());
    std::cout
        << "\nlower_bound for element 55 at position : "    // 7
        << (low3 - v.begin());
  
    return 0;
}