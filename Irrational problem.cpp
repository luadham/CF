#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
typedef long long ll;


using namespace std;
int main() {
    fast;
    //freopen("in.txt" , "rt" , stdin);
    int p[5] , a , b , cnt = 0;
    for (int i = 0; i < 4; i++) cin >> p[i];
    cin >> a >> b;
    sort(p , p + 4);

    for (int i = a; i <= b; i++)
        if (i < p[0]) cnt++;

    cout << cnt << endl;


    return 0;
}
