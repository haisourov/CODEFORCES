#include <iostream>

using namespace std;

int main(){
  long long n, k;
  cin >> n;
  k = n/2 ;
  n = k*(n-k-1);
  cout << n << endl;
  
}