#include<iostream>
using namespace std;
void amplify(int number);
main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    amplify(number);
}
void amplify(int number) {
    int m = 0;
    for (int n = 1; n <= number; n++) {
        m = n;
        if (n % 4 == 0) {

            m = n * 10;
        }
        cout << m << " ";
    }
}
