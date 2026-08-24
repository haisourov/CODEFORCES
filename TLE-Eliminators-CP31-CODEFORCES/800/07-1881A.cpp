#include <iostream>
#include <vector>
#include <set>
#include <string>
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
      int n, m, len, op = 0;
      cin >> n >> m;
      len = n;
      string x, s;
      cin >> x >> s;
      
      set<char> xs(x.begin(), x.end());
      set<char> ss(s.begin(), s.end());
      
      if (xs.size() < ss.size()){
        cout << "-1\n";
        goto label;
      }
      while(n<=m){
        if (x.contains(s)){
          cout << op << "\n";
          goto label;
        }
        x += x;
        n *= 2;
        op++;
        if (n >m){
          if (x.contains(s)){
          cout << op << "\n";
          goto label;
          }
          x += x;
          n *= 2;
          op++;
          if (x.contains(s)){
          cout << op << "\n";
          goto label;
        }
        }
        
      }
      if(n>=m){
        if (x.contains(s)){
          cout << op << "\n";
          goto label;
        }
        x += x;
        n *= 2;
        op++;
        if (x.contains(s)){
          cout << op << "\n";
          
        }  
        else{
          cout << "-1" << "\n";
        }
      }
      label:
    }
    
    return 0; 
}
