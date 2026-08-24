#include <algorithm>
#include <iostream>

using namespace std;



int main() {
  int n, x, m, maxx = 0, t;
  cin >> t;
  while (t--) {
    cin >> n >> x;
    m = n;
    int gas[n];
    while (n--) {
      int curr = m - n - 1;
      cin >> gas[curr];
      if (curr == 0) {
        maxx = gas[curr];
      } else {
        maxx = max(gas[curr] - gas[curr - 1], maxx);
      }
    }

    maxx = max(2 * (x - gas[m - 1]), maxx);
    cout << maxx << "\n";
  }
}
