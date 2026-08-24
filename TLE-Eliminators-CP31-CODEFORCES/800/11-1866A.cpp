#include <iostream>
#include <cmath>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
    int n, min;
    cin >> n;
    cin >> min;
    min = abs(min);
    n--;
    while (n--){
      int k;
      cin >> k;
      k = abs(k);
      if (min > k){
        min = k;
      }
    }
    cout << min << "\n";
    
    
  
}
