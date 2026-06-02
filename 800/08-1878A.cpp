#include <iostream>
#include <set>

using namespace std;


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
      int n, x, m;
      cin >> n >> x;
      set<int> y;
      while (n--){
        cin >> m;
        y.insert(m);
      }
      if (y.contains(x)){
        cout << "YES\n";
      }
      else{
        cout << "NO\n";
      }
      
    }
}    