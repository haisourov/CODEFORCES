#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back
#define rep(i, start, stop) for (int i = start; i < stop; i++)
using namespace std;
typedef vector<int> vi;



int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    vi b, c, a;
    int n;
    cin >> n;
    rep(i, 0, n){
      int x;
      cin >> x;
      a.pb(x);
    }
    stable_sort(a.rbegin(), a.rend());
    int k = count(a.begin(), a.end(), a[0]);
    
    rep(i,0, k){
      c.pb(a[i]);
    }
    rep(i,k,n){
      b.pb(a[i]);
    }
    if (c == a){
      cout << -1 << endl;
    }
    else{
      cout << b.size() << " " << c.size() << endl;
      for(int i: b){
        cout << i << " ";
      }
      cout << endl;
      for(int i: c){
        cout << i << " ";
      }
      cout << endl;
    }
  }  
}
