#include <iostream>

using namespace std;

int div(int n){
  double div = 0.0;
  for (int i = 1; i*i <= n; i++){
    if (n%i==0) {
      
      div++;
   }
    if (i*i == n) div -= 0.5;
  }
  div *= 2;
  return div;
}

int main(){
  int n, f = 0;
  cin >> n;
  for(int i = 1; i <= n; i+=2){
    if(div(i) == 8) f++;
  }
  cout << f << endl;
  
  
}
