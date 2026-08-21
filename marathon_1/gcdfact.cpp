#include <iostream>
#include <algorithm>

using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  a = min(a,b);
  b = 1;
  for(int i = 1; i <= a; i++){
    b *= i;
  }
  cout << b << endl;
}
