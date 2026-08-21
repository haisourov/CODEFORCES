#include <iostream>
#include <vector>
#include <algorithm>
#define Rep(i, start, stop, step) for(int i=start; i<stop; i += step)
#define rep(i, start, stop) for(int i=start; i<stop; i++)
#define pb push_back
using namespace std;
typedef vector<int> vi;

bool is_pal(unsigned long long k){
  string j = to_string(k);
  if (j.length()==1){
    return true;
  }
  int len = j.length();
  rep(i, 0, len/2){
    if (j[i]!=j[len-i-1]){
      return false;
    }
  }
  return true;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--){
    unsigned long long n, a;
    cin >> n;
    a = 0;
    bool found = false;
    
    for(unsigned long long i=0; i<= n; i+=12ULL){
      a = n - i;
      if (is_pal(a)){
        cout << a << " " << i << "\n";
        found = true;
        break;
      }
    }
    if(not found){
      cout << -1 << "\n";
    }
    
  }
}
