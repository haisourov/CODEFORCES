#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
    int n, sum =0, k;
    cin >> n;
    n--;
    while(n--){
      cin >> k;
      sum += k;
    }
    cout << -sum << "\n";
  }
}
