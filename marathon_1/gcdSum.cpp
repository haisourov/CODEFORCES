#include <iostream>

using namespace std;

int dsum(int n) {
    int sum = 0;
    
    while (n > 0) {
        sum += n % 10;
        n /= 10;   
    }
    
    return sum;
}

int GCD(int x, int y){
  while (y!=0){
    int r = x % y;
    x = y;
    y = r;
  }
  return x;
}


int main(){
  long long t, n;
  cin >> t;
  while (t--){
    cin >> n;
    while (true){
      if (GCD(n, dsum(n))>1){
        cout << n << endl;
        break;
      }
      n++;
    }
  
  }
}
