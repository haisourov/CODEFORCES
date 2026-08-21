#include <iostream>
#include <set>
#include <algorithm>

using namespace std;

int main(){
  int q;
  set<int> s;
  cin >> q;
  while (q--){
    int x, k;
    cin >> x >> k;
    if (x == 1){
      s.insert(k);
    }
    else if(x == 2){
      s.erase(k);
    }
    else{
      if (s.find(k) != s.end()) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }
}
