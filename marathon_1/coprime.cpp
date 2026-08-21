#include <iostream>

using namespace std;

int GCD(int x, int y){
  while (y!=0){
    int r = x % y;
    x = y;
    y = r;
  }
  return x;
}


int main(){
  int t;
  while(t--){
    int n, k;
    cin >> n;
    n = k;
    vector<int> v, ij;
    while (n--){
      int k;
      cin >> k;
      v.push_back(k);
    }
    for(int i = k-1; i<1; i--){
      for(int j = i-1; j<0 ; j--){
        if (GCD(v[i], v[j]) == 1) ij.push_back(i+j);
      }
    }
    
    if (!ij.empty())  cout << *(max_element(ij.begin(),ij.end())) << endl;
    else cout << -1 << endl;
  }
}
