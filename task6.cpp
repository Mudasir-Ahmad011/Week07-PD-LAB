#include<iostream>
using namespace std;
main() {
    int period, patients, treated, remain, untreated, sum = 0;
    cout << "Enter the period: ";
    cin >> period;
    for (int n = 1;n <= period;n++) {
        cout << "Enter the patient: ";
        cin >> patients;
        treated = 7;
        if (n % 3 == 0) {
            if (untreated > treated) {
                remain = patients - 14;
            }
        }
        if (untreated > 7) {
            remain = patients - 1;
        }
        untreated = patients;
        sum = sum + untreated;
    }
    treated = sum - remain;


    cout << "Treated patients: " << treated << endl << "Untreated patients: " << untreated;
}