#include <iostream>
#include <vector>

#define pb push_back
#define rep(i, start, stop) for(int i = start; i < stop; i++)
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
      int n;
      cin >> n;
      int len = n;
      vector<int> v, out;
      while (n--){
        int k;
        cin >> k;
        v.pb(k);
      }
      out.pb(v[0]);
      rep(i, 1, len){
        if (v[i-1] <= v[i]){
          out.pb(v[i]);
        }
        else{
          out.pb(v[i]);
          out.pb(v[i]);
        }
      }
      cout << out.size() << "\n";
      for (int k: out){
        cout << k << " ";
      }
      cout << "\n";
      
      
    }
}    
