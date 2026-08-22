#include <iostream>

using namespace std;

long long GCD(long long x, long long y){
  while (y!=0){
    long long r = x % y;
    x = y;
    y = r;
  }
  return x;
}

int main(){
  int t;
  cin >> t;
  while (t--){
    long long a, b, c;
    cin >> a >> b;
    c = GCD(a, b) + a/GCD(a, b)* b;
    if (c == a+b){
      cout << "true" << endl;
    }
    else {
      cout << "false" << endl;
    }
    
  }
}