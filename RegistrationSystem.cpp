#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;


int main(){
    _AdHam;
    
    int n;
    cin >> n;
    map<string, int> mp;
    string s;
    
    while (n--) {
        cin >> s;
        mp[s]++;
        if (mp[s] == 1) cout << "OK\n";
        else cout << s + to_string(mp[s] - 1) << endl;
    }




    return 0;
}