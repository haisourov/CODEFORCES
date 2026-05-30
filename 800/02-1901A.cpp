#include <algorithm>
#include <iostream>
#include <limits>
#include <print>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define Rep(i, start, stop, step) for (int i = start; i < stop; i += step)
#define rep(i, start, stop) for (int i = start; i < stop; i++)
#define qsort stable_sort
using namespace std;

typedef long long ll;
typedef vector<pair<int, int>> vpi;
typedef vector<int> vi;

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
