#include <iostream>
#include <cmath>

using namespace std;

void solve(int case_num) {
    double L, H, K;
    cin >> L >> H >> K;
    const double PI = acos(-1.0);
    double val = (6.0 * L * H) / (PI * K);

    if (val < 1.0) {
        cout<< "Case " <<case_num<<": -1\n";
        return;
    }

    long long W = static_cast<long long>(floor(sqrt(val)));

    if (W< 1) {
        cout<< "Case "<< case_num<< ": -1\n";
    } else {
        cout<<"Case " <<case_num << ": "<< W<< "\n";
    }
}

int main() {
    int T;
    if (cin >> T) {
        for (int i= 1; i<= T;++i) {
            solve(i);
        }
    }
    return 0;
}
