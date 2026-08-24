#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <utility>

#define rep(i, start, stop) for(int i=start; i<stop; i++)
using namespace std;

typedef vector<int> vi;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
      int n;
      cin >> n;
      vi x(n,0);
      rep(i, 0, n){
        cin >> x[i];
      }
      set<int> y(x.begin(), x.end());
      if (y.size() > 2){
        cout << "NO" << "\n";
      }
      else if(y.size() == 2){
        auto it = y.begin();
        int k = *it;
        int m = count(x.begin(), x.end(), k);
        advance(it, 1);
        k = *it;
        int l = count(x.begin(), x.end(), k);
        k = m-l;
        if (k == 0 or k == 1 or k == -1){
          cout << "YES\n";
        }
        else{
          cout << "NO\n";
        }
      }
      else{
        cout << "YES\n";
      }
      
    }
    
}
