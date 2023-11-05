#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>
#include<set>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<list>
#include<numeric>
#include<string>
#include<sstream>


using namespace std;
#define ll  long long int


class Solution
{
    public:
    //Heapify function to maintain heap property.
    void heapify(int arr[], int n, int i)  
    {
      // Your Code Here
      int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest = i;
     
        if (l < n && arr[l] > arr[i])
            largest = l;
     
        if (r < n && arr[r] > arr[largest])
            largest = r;
     
        if (largest != i) {
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
        
    }

    public:
    //Function to build a Heap from array.
    void buildHeap(int arr[], int n)  
    { 
    // Your Code Here
        int end = n - 1;        //  end element
        int ind = (end - 1)/2;      //  starting index from which we have to check the heap property
                                    //  we do not need to check for the end nodes cause they already
                                    //  follow heap property
        for(int i = ind; i >= 0; i--)
            heapify(arr, n, i);
    }

    
    public:
    //Function to sort an array using Heap Sort.
    void heapSort(int arr[], int n)
    {
        buildHeap(arr, n);
        
        int t;
        for(int i = 0; i < n - 1; i++){
            t = arr[0];
            arr[0] = arr[n - i - 1];
            heapify(arr, n - i - 1, 0);
            arr[n - i - 1] = t;
        }
    }
};