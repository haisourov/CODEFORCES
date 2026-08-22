#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int main(){
  map<string,int> m;
  int q;
  cin >> q;
  while(q--){
    int w, y;
    string x;
    cin >> w >> x;
    if (w == 1){
      cin >> y;
      if (m.find(x) != m.end()) m[x] += y;
      else m.insert(make_pair(x, y));
    }
    else if(w == 2){
      m.erase(x);
    }
    else{
      if (m.find(x) != m.end()) cout << m[x] << endl;
      else cout << 0 << endl;
    }
  }
}