#include<iostream>
#include <limits.h>
using namespace std;

int minimum_no_array(int arr[], int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5] = {4, 12, 8, 10, 0};
    int result = minimum_no_array(arr, 5);
    cout<<"Minimum value is: " << result<<endl;
    return 0;
}