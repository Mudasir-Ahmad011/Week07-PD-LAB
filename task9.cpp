#include<iostream>
using namespace std;
void shapeside(int rows);
main() {
    int rows;
    cout << "Enter the rows: ";
    cin >> rows;
    shapeside(rows);
}
void shapeside(int rows) {
    for (int n = 1; n <= rows; n++) {
        for (int m = 1; m <= n; m++) {
            cout << "*";
        }
        for (int j = 1;j <= rows - n;j++) {
            cout << " ";
        }
        for (int j = 1;j <= rows - n;j++) {
            cout << " ";
        }
        for (int k = n; k >= 1;k--) {
            cout << "*";
        }

        cout << endl;
    }
}