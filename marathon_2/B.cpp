#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n, k;
  vector<int> v;
  cin >> n;
  while(n--){
    cin >> k;
    v.push_back(k);
  }
  cin >> n;
  v.erase(v.begin()+n-1);
  cin >> n;
  cin >> k;
  v.erase(v.begin()+n-1, v.begin()+k-1);
  
  cout << v.size() << endl;
  for (int i : v){
    cout << i << " ";
  }
  cout << endl;
}
