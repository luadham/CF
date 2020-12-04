#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);
    int n , y, x , cnt = 0;
    cin >> n >> y >> x;

    char arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
    n--;

    if (arr[n - x] == '0') cnt++;

    for (int i = n; i > (n - y); i--) {
        if (arr[i] == '1' && i > (n - x)) cnt++;
        else if (arr[i] == '1' && i < (n - x)) cnt++;
    }
    cout << cnt << endl;




    return 0;
}
