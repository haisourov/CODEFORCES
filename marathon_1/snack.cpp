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
  long long x, y;
  cin >> x >> y;
  cout << x*y / GCD(x,y) << endl;
}    
