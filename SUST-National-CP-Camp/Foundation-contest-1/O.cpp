#include <iostream>

using namespace std;

long long div(long long n) {
    long long div = 0;
    long long i;
    for (i = 1; i * i < n; i++) {
        if (n % i == 0) div++;
    }
    div *= 2;
    if (i * i == n) div++;
    return div;
}

int main(){
  int n, count = 0, i;
  cin >> n;
    for(i = 2; count < n; i++){
      if(div(i)==2) count++;
    }
  cout << i-1 << endl;
  
  
}