#include <iostream>

using namespace std;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int t;
  cin >> t;
  
  while (t--){
    int a, odd = 0;
    cin >> a ;
    while(a--){
      int k;
      cin >> k;
      if (k%2==1){
        odd++;
      }
    }
    if (odd % 2 == 0){
      cout << "YES\n";
    }
    else{
      cout << "NO\n";
    }
    
    
    
  }
  return 0;
}
