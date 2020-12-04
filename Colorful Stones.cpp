#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int cnt = 0;
    string s , t;
    cin >> s >> t;
    for (int i = 0; i < t.size(); i++)
        if (s[cnt] == t[i]) cnt++;

    cout << cnt + 1 << endl;
    return 0;
}
