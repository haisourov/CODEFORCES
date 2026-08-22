#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
  long long n;
  cin >> n;
  
  n = (n%2)? n*((n+1)/2) :(n/2)*(n+1);
  cout << n << ".000"<< endl;
  }
}