#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int main()
{
    //freopen("in.txt" , "rt" , stdin);
    string s;
    cin >> s;
    int len = s.size() , flag = 1;

    while (s[len - 1] == '0') len--;

    int i = 0 , j = len - 1;

    while (i < j && flag)
        if (s[i++] != s[j--]) flag = 0;


    cout << ((flag)? "YES" : "NO") << endl;

    return 0;
}
