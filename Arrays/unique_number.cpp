#include<iostream>
using namespace std;

// using xor Method 
// int getUnique(int arr[], int n){
//     int ans = 0;
//     for (int i = 0; i < n; i++)
//     {
//         ans = ans ^ arr[i];
//     }
//     return ans;
// }

// using looping method
int getUnique(int arr[], int n){
    for (int i = 0; i < n; i++){
        int count = 0;
        for (int j = 0; j < n; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count == 1){
            return arr[i];
        }
    }
    return -1;
};

int main(){
    int arr[] = {2, 10, 11, 13, 10, 2, 15, 13, 15};
    int n = 9;
    int result = getUnique(arr, n);
    cout << "The unique number is: " << result << endl;
    return 0;
}