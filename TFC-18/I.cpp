#include <iostream>
#include <vector>

using namespace std;

int main(){
  int T;
  cin >> T;
  for(int z = 1; z<= T; z++){
    vector<long long> k;
    int N, Q;
    cin >> N;
    while (N--){
      long long j;
      cin >> j;
      k.push_back(j);
    }
    cin >> Q;
    while(Q--){
      long long M;
      cin >> M;
      for(int i = 0; i < k.size() ; i++){
        k[i] %= M;
      }
    }
    cout << "Case " << z << ":\n";
    for (long long i: k){
     cout << i << " ";
    }
    cout << endl;
  }
}
