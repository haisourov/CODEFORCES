#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t,n;
  cin >> t;
  while (t--){
    cin >> n;
    string s;
    cin >> s;
    vector<int> x(n, 0);
    int j = 0;
    while(n--){
      if (s[n] == '.'){
        x[j]++;
      }
      else{
        j++;
      }
    }
    j++;
    int output=0;
    while(j--){
      if (x[j] == 0){
        continue;
      }
      else if(x[j] == 1){
        output++;
      }
      else if(x[j]==2){
        output += 2;
      }
      else{
        output = 2;
        break;
      }
    }
    cout << output << "\n";
  }
}
