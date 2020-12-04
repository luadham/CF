#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    freopen("in.txt" , "rt" , stdin);

    int n , exit , enter , curr = 0, maxn = 0;

    cin >> n;

    while (n--) {
        cin >> exit >> enter;
        curr = curr - exit + enter;
        if (curr > maxn) maxn = curr;
    }

    cout << maxn << endl;
    return 0;
}
