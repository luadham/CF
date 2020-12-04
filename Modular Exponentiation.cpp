#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);

    int n , m;
    cin >> n >> m;

    if (n > 29) cout << m << endl;
    else cout << (m % (1 << n)) << endl;
    return 0;
}
