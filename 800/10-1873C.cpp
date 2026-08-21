#include <iostream>
#include <string>
#include <vector>

#define pb push_back
#define rep(i, start, stop) for(int i = start; i < stop; i++)
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    vector<string> x;
    int sum = 0;
    rep(i, 0, 10) {
      string y;
      cin >> y;
      x.pb(y);
    }
    rep(i, 0, 10){
      rep(j, 0, 10){
        rep(k, 0, 5){
          int l = 9-k;
          if((i==k or i==l) and (j>=k and j<=l) or ((i>k and i<l) and (j==k or j==l))){
            if (x[i][j] == 'X'){
              sum += (k+1);
            }
          }
        }
        
      }
    }
    cout << sum << endl;
  }
}
