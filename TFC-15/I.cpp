#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    cout << "? 1" << endl;
    int d1;
    cin >> d1;
    if (d1 % 3 == 0) {
        cout << "! 1" << endl;
        return 0;
    }
    if (N == 1) {
        cout << "! 0" << endl;
        return 0;
    }
    cout << "? " << N << endl;
    int d2;
    cin >> d2;
    if (d2 % 3 == 0) {
        cout << "! 1" << endl;
        return 0;
    }
    if ((d1 + d2) % 3 == 0) {
        cout << "! 1" << endl;
    } else {
        cout << "! 0" << endl;
    }
}