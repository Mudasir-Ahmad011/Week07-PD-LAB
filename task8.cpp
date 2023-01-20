#include<iostream>
using namespace std;
main() {
    int number, n, num, minibus, truck, train, sum1 = 0, sum2 = 0, sum3 = 0;
    float sum = 0.0;
    cout << "Enter the number(1-1000): ";
    cin >> number;
    for (int n = 1; n <= number; n++) {
        cout << "Enter the number: ";
        cin >> num;
        if (num == 1 || num <= 3) {
            sum1 = sum1 + num;
        }
        if (num > 3 && num <= 11) {
            sum2 = sum2 + num;
        }
        if (num > 11) {
            sum3 = sum3 + num;
        }
        sum = sum + num;
    }
    minibus = sum1 * 200;
    truck = sum2 * 175;
    train = sum3 * 120;
    float average = (minibus + truck + train) / sum;
    float p1 = (sum1 * 100) / sum;
    float p2 = (sum2 * 100) / sum;
    float p3 = (sum3 * 100) / sum;
    cout << average << endl << p1 << "%" << endl << p2 << "%" << endl << p3 << "%" << endl;

}