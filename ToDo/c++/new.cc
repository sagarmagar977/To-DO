#include <iostream>
using namespace std;

int n, avg, *p, i;
int total = 0;

int main() {
    cout << "How many numbers do you want to input: " << endl;
    cin >> n;
    p = new int[n];

    for (i = 0; i < n; ++i) { // Changed the loop to start from 0
        cout << "Enter number " << i + 1 << ": " << endl;
        cin >> p[i];
    }

    for (i = 0; i < n; i++) { // Changed the loop to start from 0
        total = total + p[i];
    }

    avg = total / n;
    cout << "Average is: " << avg << endl;
    delete[] p;
    return 0;
}
