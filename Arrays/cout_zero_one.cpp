#include<iostream>
using namespace std;

void count_zero_to_one(int arr[], int size){
    int zero = 0;
    int one = 0;
    for (int i = 0; i < size; i++){
        if(arr[i]==0){
            zero++;
        } 
        one++;
    }
    cout << "Zeros: " << zero << ", Ones: " << one << endl;
};

int main(){
    int arr[5]={0, 1, 0, 1, 0};
    count_zero_to_one(arr, 5);
    return 0;
};