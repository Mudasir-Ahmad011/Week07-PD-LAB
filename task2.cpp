#include<iostream>
using namespace std;
void asterikpattren(int rows);
main() {
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    asterikpattren(rows);
}
void asterikpattren(int rows) {
    for (int n = 1; n <= rows; n++) {
        for (int m = 1; m <= rows - n; m++) {
            cout << "*";
        }
        cout << endl;
    }
}