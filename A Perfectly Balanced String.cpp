#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define T int T; cin >> T; while(T--) go()
#define sz(x) (int) x.size()
#define vec vector

typedef long long ll;

using namespace std;

int x, y;
const int N = 1e5 + 1;


void go() {
    string s;
    cin >> s;
    int n = sz(s);
    set<char> st, ans;
    for (int i = 0; i < n; i++) {
        st.insert(s[i]);
    }
    int windowSize = (int) st.size();

    if (windowSize == 1) {
        cout << "Yes\n";
        return;
    }

    bool ok = true;
    for (int i = 0; i < n - windowSize + 1; i++) {
        for (int j = 0; j < windowSize; j++) {
            ans.insert(s[i + j]);
        }
        if (ans.size() != windowSize) ok = false;
        ans.clear();
    }

    ok? cout << "Yes\n" : cout << "No\n";
}

int main(){
    _AdHam;
    T;
    return 0;
}