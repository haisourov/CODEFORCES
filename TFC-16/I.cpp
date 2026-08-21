#include <bits/stdc++.h>
using namespace std;


vector<int> build_sa(const string &s) {
    int n = (int)s.size();
    vector<int> sa(n), rnk(n), tmp(n);
    iota(sa.begin(), sa.end(), 0);
    for (int i = 0; i < n; i++) rnk[i] = s[i];

    for (int k = 1; k < n; k <<= 1) {
        auto cmp = [&](int i, int j) {
          if (rnk[i] != rnk[j]) return rnk[i] < rnk[j];
           int ri = (i + k < n ? rnk[i + k] : -1);
           int rj = (j + k < n ? rnk[j + k] : -1);
          return ri < rj;
        };
        sort(sa.begin(), sa.end(), cmp);
        tmp[sa[0]] = 0;
        for (int i = 1; i < n; i++)
           tmp[sa[i]] =tmp[sa[i-1]] + cmp(sa[i-1], sa[i]);
        rnk= tmp;
    }
    return sa;
}


vector<int> build_lcp(const string &s, const vector<int> &sa) {
    int n = (int)s.size();
    vector<int> rnk(n), lcp(n - 1);
    for (int i = 0; i < n; i++) rnk[sa[i]] = i;
    int h = 0;
    for (int i = 0; i < n; i++) {
        if (rnk[i] == n- 1) continue;
        int j = sa[rnk[i] +1];
        while (i + h <n && j+ h < n && s[i + h] == s[j + h]) h++;
        lcp[rnk[i]] = h;
        if (h) h--;
    }
    return lcp;
}

int main() {

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        auto sa = build_sa(s);
    auto lcp = build_lcp(s, sa);
    s = *max_element(lcp.begin(), lcp.end());
}

        cout << s << endl;
    }
    return 0;
}
