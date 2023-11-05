#include<iostream>

using namespace std;

void merge(int* a, int from, int mid, int to){
    int n = to - from + 1;
    int b[n];
    int i = 0;
    int i1 = from;
    int i2 = mid + 1;

    while(i1 <= mid && i2 <= to){
        if(a[i1] < a[i2]){
            b[i] = a[i1];
            i++;
            i1++;
        }
        else{
            b[i] = a[i2];
            i++;
            i2++;
        }
    }

    while(i1 <= mid){
        b[i] = a[i1];
        i++;
        i1++;
    }

    while(i2 <= to){
        b[i] = a[i2];
        i++;
        i2++;
    }

    for(int i = 0; i < n; i++){
        a[from + i] = b[i];
    }
}

void mergeSort(int* a, int from, int to){

    if(from == to) return;

    int mid = (from + to) / 2;

    mergeSort(a, from, mid);
    mergeSort(a, mid + 1, to);
    merge(a, from, mid, to);
}


int main(){
    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    mergeSort(a, 0, n - 1);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}