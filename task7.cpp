#include<iostream>
using namespace std;
main() {
    float number;
    int num;
    float p1, p2, p3, sum1 = 0, sum2 = 0, sum3 = 0;
    cout << "Enter the number(1-1000): ";
    cin >> number;
    for (int n = 1;n <= number;n++) {
        cout << "Enter the number: ";
        cin >> num;
        if (num % 2 == 0) {
            sum1 = sum1 + 1;
        }
        if (num % 3 == 0) {
            sum2 = sum2 + 1;
        }
        if (num % 4 == 0) {
            sum3 = sum3 + 1;
        }
    }
    p1 = (sum1 * 100) / number;
    p2 = (sum2 * 100) / number;
    p3 = (sum3 * 100) / number;
    cout << p1 << "%" << endl << p2 << "%" << endl << p3 << "%" << endl;
}