#include<iostream>

using namespace std;

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int partition(int*arr, int start, int end){
    int i = start - 1;
    int pivot = arr[end];
    for(int j = start; j < end; j++){
        if(arr[j] <= pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[end], &arr[i + 1]);
    return (i + 1);
}

void quicksort(int* arr, int start, int end){

    if(start < end){
        int pi = partition(arr, start, end);
        quicksort(arr, start, pi - 1);
        quicksort(arr, pi + 1, end);
    }
}

int main(){
    int arr[] = {1, 3, 5, 9, 3, 2, 6, 7, 4, 8, 4, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    quicksort(arr, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }

    return 0;
}