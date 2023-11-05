#include<vector>
#include<iostream>
  
// Driver code
int main()
{
    int arr[] = { 10, 20, 30, 40, 50 };
    int n = sizeof(arr)/sizeof(int);
    std::vector<int> v(arr, arr + n);
  
    // Print vector
    std::cout << "Vector contains :";
    for (int i = 0; i < v.size(); i++)
        std::cout << " " << v[i];
    std::cout << "\n";
  
    std::vector<int>::iterator upper1, upper2;
  
    // std :: upper_bound
    upper1 = std::upper_bound(v.begin(), v.end(), 30);
    upper2 = std::upper_bound(v.begin(), v.end(), 45);
  
    std::cout << "\nupper_bound for element 30 is at position : " 
              << (upper1 - v.begin()) << " " << *upper1;
    std::cout << "\nupper_bound for element 45 is at position : "
              << (upper2 - v.begin()) << " " << *upper2;
  
    return 0;
}