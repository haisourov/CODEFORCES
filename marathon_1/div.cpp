#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
  
  int n;
  double div = 0.0;
  cin >> n;
  for (int i = 1; i*i <= n; i++){
    if (n%i==0) {
      div++;
   }
    if (i*i == n) div -= 0.5;
  }
  div *= 2;
  cout << div << endl;
  }
  
}
