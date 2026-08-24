#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        if (!is_sorted(a.begin(), a.end())) {
            cout << 0 << "\n";
            continue;
        }
        
        int min_diff = INT_MAX;
        for (int i =0; i < n-1; i++) {
            min_diff = min(min_diff, a[i+1] - a[i]);
        }
        cout << (min_diff / 2) + 1 << endl;
    }
    return 0;
}
