#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v;
  int n, k;
  cin >> n;
  while (n--){
    cin >> k;
    v.push_back(k);
  }
  sort(v.begin(),v.end());
  for (int i: v){
    cout << i << " ";
    }
  cout  << endl;
  
}