#include <iostream>
using namespace std;

int main(){
    int num;
    cin >> num;
    for (int row = 0; row < num; row = row + 1)
    {
        // half pyramid
        for (int col = 0; col < num - row; col = col + 1)
        {
            cout << "*";
        }
        // space
        for (int col = 0; col < 2 * row + 1; col = col + 1)
        {
            cout << " ";
        }
        // half pyramid
        for (int col = 0; col < num - row; col = col + 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    // Lower pyramid
for (int row = 0; row < num; row++)
{
    // left stars
    for (int col = 0; col < row + 1; col++)
    {
        cout << "*";
    }

    // spaces
    for (int col = 0; col < 2 * (num - row) - 1; col++)
    {
        cout << " ";
    }

    // right stars
    for (int col = 0; col < row + 1; col++)
    {
        cout << "*";
    }

    cout << endl;
}
}