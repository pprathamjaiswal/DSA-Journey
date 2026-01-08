#include<iostream>
using namespace std;

int main(){
    int num;
    cin >> num;

    for (int row = 0; row < num; row++){
        for (int col = 0; col < row+1; col++){
            cout << row + 1;
            if(row!=col){
                cout << "*";
            }
        }
        cout << endl;
    }
    // lower pyramid
        for (int row = 0; row < num; row++){
            for (int col = 0; col < num - row; col++)
            {
                cout << num - row;
                if(col%2==1){
                    cout << "*";
                }
                // if (col!=num-row-1)
                // {
                //     cout << "*";
                // }
            }
        cout << endl;
    }
}