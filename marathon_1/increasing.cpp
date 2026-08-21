#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main(){
  int t;
  cin >> t;
  while (t--){
    int n;
    cin >> n;
    vector<int> v;
    while (n--){
      int i;
      cin >> i;
      v.push_back(i);
    }
    set<int> s(v.begin(), v.end());
    if (v.size() == s.size()){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
  }
  return 0;
}    
