#include<iostream>
using namespace std;
void triangletable(int triangle);
main() {
    int triangle;
    cout << "Enter the number: ";
    cin >> triangle;
    triangletable(triangle);
}
void triangletable(int triangle) {
    int m = 0;
    int a = 1;
    int x = 0;
    for (int n = 1;n <= triangle;n++) {
        m = a + x;
        x = m;
        a = n + 1;
    }
    cout << m << " ";
}