#include <iostream>

using namespace std;

int main() {
    long long A11, A12, A21, A22;
    long long B11, B12, B21, B22;

    cin >> A11 >> A12 >> A21 >> A22;
    cin >> B11 >> B12 >> B21 >> B22;

    long long C11 = A11 * B11 + A12 * B21;
    long long C12 = A11 * B12 + A12 * B22;
    long long C21 = A21 * B11 + A22 * B21;
    long long C22 = A21 * B12 + A22 * B22;

    cout << C11 << " " << C12 << "\n";
    cout << C21 << " " << C22 << "\n";

    return 0;
}
