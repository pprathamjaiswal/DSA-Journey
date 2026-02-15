#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int left = 0;
    int right = size - 1;
    while(left<=right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[6] = {10, 20, 30, 40, 50, 60};
    reverseArray(arr, 6);
      cout << "Reversed Array: ";
    for(int i = 0; i < 6; i++){
        cout << arr[i] << " ";
    }
    return 0;
}