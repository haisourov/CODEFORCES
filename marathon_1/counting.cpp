#include <iostream>
#include <vector>

using namespace std;

int main(){
  int n, q, count = 0;
  vector<int> v;
  cin >> n >> q;
  while (n--){
    int k;
    cin >> k;
    v.push_back(k);
  }
  while (q--){
    int x;
    cin >> x;
    int k = v.size();
    for (int i: v){
      if (i>=x) count++;
    }
    cout << count << endl;
    
  }
  
  
}
