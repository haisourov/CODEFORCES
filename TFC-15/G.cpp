#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  for (int i = 1; i <= t; i++){
    long long n;
    cin >> n ;
    cout << "Case " << i << ": " << 2*(n-2) << endl;
  }
}
