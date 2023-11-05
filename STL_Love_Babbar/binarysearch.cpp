#include<vector>
#include<iostream>

using namespace std;

int binary_search(vector<string>& string_vector, string str){
    int first = 0;
    int last = string_vector.size();
    int mid;

    while(true){
        if(last >= first){

            mid = first + (last - first) / 2;

            if(string_vector[mid] == str){
                return mid;
            }
            if(string_vector[mid] > str){
                last = mid - 1;
                continue;
            }

            first = mid + 1;
        }
        else{
            return -1;
        }
    }
}