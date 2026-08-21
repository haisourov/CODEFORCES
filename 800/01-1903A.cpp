#include <iostream>
#include <vector>
#include <algorithm>

#define pb push_back

using namespace std;

typedef long long ll;
typedef vector<int> vi;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int k, n;
        cin >> n >> k;
        vi vec;
        while(n--){
          int j;
          cin >> j;
          vec.pb(j);
        }
        
        
        if (is_sorted(vec.begin(), vec.end()) || k >= 2) {
    cout << "YES\n";
} else {
    cout << "NO\n";
}
    }
    return 0;
}
