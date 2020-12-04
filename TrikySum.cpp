#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

ll calc(ll a1,ll an,ll n) {
    return ((a1+an)*n)/2;
}

int main()
{
    int tsc;
    cin >> tsc;
    while (tsc--) {
        ll n;
        cin >> n;
        ll sum1 = calc(1,n,n);
        ll sum2 = 0;
        vector<ll> powers;
        powers.push_back(1);

        for (int i = 1; i < 32; i++)
            powers.push_back(powers[i - 1] * 2);

        for (int i = 0; i < 32; i++)
            if (powers[i] <= n) sum2 += powers[i];

        cout << sum1 - 2 * sum2 << endl;
    }
    return 0;
}
