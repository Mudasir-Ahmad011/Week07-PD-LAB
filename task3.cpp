#include<iostream>
using namespace std;
void upperpart(int rows);
void lowerpart(int rows);
main() {
    int rows;
    cout << "Enter number of rows: ";
    cin >> rows;
    upperpart(rows);
    lowerpart(rows);
}
void upperpart(int rows) {
    int i = rows / 2;
    for (int n = 1;n <= i;n++) {
        for (int m = 1;m <= i - n;m++) {
            cout << " ";

        }
        for (int k = 1; k <= n;k++) {
            cout << "*";
        }
        cout << endl;
    }
}
void lowerpart(int rows) {
    int i = rows / 2;
    for (int n = 1; n <= i;n++) {
        for (int m = 1;m <= n;m++) {
            cout << " ";

        }
        for (int k = 1;k <= i - n;k++) {
            cout << "*";
        }

        cout << endl;
    }
}