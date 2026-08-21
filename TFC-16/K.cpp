#include <iostream>
#include <string>
#include <vector>
using namespace std;

int func(string d, int l, int r, vector<pair<string, int>> m){
  if(d == "right"){
  for(int i = l-1; i >= r; i--){
   if (m[i].first == "right") return i;
  }
  }
  else if (d == "left"){
    for(int i = l+1; i < r; i++){
   if (m[i].first == "left") return i;
  }
  }
  return -1;
  
}

int main(){
  int n, q;
  cin >> n >> q;
  vector<pair<string,int>> m(n,{"",0});
  while(q--){
    int a, x, l, r;
    string d;
    cin >> a;
    if(a == 1){
      
      cin >> d >> x;
      d = (d=="1")? "right" : "left";
      m[x-1].first = d;
      m[x-1].second++;
      
    }
    else{
      
      cin >> l >> r;
      int l_x = func("right", l, 0, m);
      int r_x = func("left", r, m.size(), m);
     // int l_l = func("left", )
      
    }
    
    
    
  }
  
  
}
