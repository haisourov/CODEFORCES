#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--){
    int a, b;
    vector<int> vi, diff;
    cin >> a ;
    b = a;
    while(a--){
      int l,k;
      cin >> k;
      if (a != b-1) {
        l =  k - diff[b-a-1];
        diff.push_back(l);
      }
      
      vi.push_back(k);
    }
    if (!is_sorted(vi.begin(), vi.end())){
      cout << "0";
      continue;
    }
    int min_val = *(min_element(diff.begin(), diff.end()));
    cout << min_val << endl;
    
    
  }
  return 0;
}
