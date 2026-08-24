#include <iostream>
#include <iomanip>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double x = (y1*x2+y2*x1)/(y1+y2);
    
    cout << fixed << setprecision(16) << x << " 0.0000000000000000" << endl;
  }
}
