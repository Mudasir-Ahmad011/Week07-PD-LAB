#include<iostream>
using namespace std;
main() {
    int period, patients;
    int untreated = 0;
    int treated = 0;
    int doctors = 7;
    cout << "Enter the days: ";
    cin >> period;
    for (int n = 1;n <= period;n++) {
        cout << "Enter the patients: ";
        cin >> patients;
        if (n % 3 == 0) {
            if (treated < untreated) {
                doctors = doctors + 1;
            }
        }
        if (patients <= doctors) {
            treated = treated + patients;
        }
        else if (patients > doctors) {
            treated = treated + doctors;
            untreated = (patients - doctors) + untreated;
        }
    }
    cout << "Treated Patients: " << treated << endl;
    cout << "Untreated Patients: " << untreated << endl;
    if (doctors > 7) {
        cout << "More doctors needed";
    }
}