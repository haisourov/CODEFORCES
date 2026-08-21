#include <iostream>
#include <vector>
#include <algorithm>
#define Rep(i, start, stop, step) for(int i=start; i<stop; i += step)
#define rep(i, start, stop) for(int i=start; i<stop; i++)
#define pb push_back
using namespace std;
typedef vector<int> vi;


int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    vi vec;
    while (n--){
      int k;
      cin >>k;
      vec.pb(k);
    }
    sort(vec.rbegin(),vec.rend());
    bool flag = true;
    rep (i, 0, vec.size()-2){
      if (vec[i+2] == vec[i]%(vec[i+1])){
        continue;
      }
      else{
        flag = false;
        break;
      }
    }
    if (flag){
      cout << vec[0] << " " << vec[1] << "\n";
    }
    else{
      cout << -1 << "\n";
    }
  }
}
