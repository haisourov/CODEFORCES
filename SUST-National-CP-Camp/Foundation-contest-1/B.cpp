#include <iostream>

using namespace std;

int main(){
  int t;
  cin >> t;
  while (t--){
  long long x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  
  if (x1 != x2 and y1!= y2){
    cout << "sad" << endl;
  }
  else if (x1 == x2){
    string d = (y2-y1 > 0)? "up" : "down";
    cout << d << endl;
  }
  else{
    string d = (x2-x1 > 0)? "right" : "left";
    cout << d << endl;
  }
  }
}