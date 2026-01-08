#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    // Upper half
    for (int row = 0; row < num; row++) {
        // spaces
        for (int col = 0; col < num - row - 1; col++) {
            cout << " ";
        }

        // stars
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Lower half
    for (int row = num - 2; row >= 0; row--) {
        // spaces
        for (int col = 0; col < num - row - 1; col++) {
            cout << " ";
        }

        // stars
        for (int col = 0; col < 2 * row + 1; col++) {
            if (col == 0 || col == 2 * row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
};
