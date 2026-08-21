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

long long gcd(long long N){
  
  long long G=0;
  for(long long i=1;i<=N;i++){
    for(long long j=1;j<=N;j++)
      {
        for(long long k = 1; k<= N; k++)
        {
          G+= GCD(GCD(i,j), k);
        }
      }
  }
  return G;
}

int main(){
  long long N;
    cin >> N;
    cout << gcd(N) << endl;
}
