#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int n, q;
  long long l = 0;
  cin >> n >> q;
  vector<long long> sum;
  while(n--){
    long long k;
    cin >> k;
    l += k;
    sum.push_back(l);
  }
  while (q--){
    int a,b;
    cin >> a >> b;
    cout << sum[b-1] - ((a==1)? 0:sum[a-2]) << endl;
  }
  }
