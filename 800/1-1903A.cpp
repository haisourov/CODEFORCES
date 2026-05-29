#include <iostream>
#include <print>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
#include <limits>

#define pb push_back
#define mp make_pair
#define f first
#define s second
#define Rep(i, start, stop, step) for(int i=start; i<stop; i += step)
#define rep(i, start, stop) for(int i=start; i<stop; i++)
#define qsort stable_sort
using namespace std;

typedef long long ll;
typedef vector<pair<int,int>> vpi;
typedef vector<int> vi;

vector<int> split(string text, char delimiter){
    int len = (int) text.length();
    vector<int> vec;
    string s = "";
    rep(i, 0, len){
        if (text[i] == delimiter){
            if(!s.empty()) { // Safeguard against multiple spaces
                vec.pb(stoi(s));
                s = "";
            }
            continue;
        }
        s += text[i];
    }
    if(!s.empty()) vec.pb(stoi(s));
    return vec;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int k, n;
        cin >> n >> k;
        
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        
        string st;
        getline(cin, st);
        
        vector<int> vec = split(st, ' ');
        
        if (is_sorted(vec.begin(), vec.end()) || k >= 2) {
    cout << "YES\n";
} else {
    cout << "NO\n";
}
    }
    return 0;
}