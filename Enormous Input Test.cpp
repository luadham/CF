#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);
    int n , c = 0; ll k , t;

    cin >> n >> k;
    while (n--) {
        cin >> t;
        if (t < k) continue;
        else if (t % k == 0) c++;
    }

    cout << c << endl;
    return 0;
}
