#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define T int T; cin >> T; while(T--) go()
#define sz(x) (int) x.size()
#define vec vector

typedef long long ll;

using namespace std;

int x, y, z;
const int N = 1e5 + 2;
map<string, int> mp;


void pre() {
    int cnt = 1;
    string word = "";
    for (char i = 'a'; i <= 'z'; i++) {
        for (char j = 'a'; j <= 'z'; j++) {
            if (i == j) continue;
            word.push_back(i);
            word.push_back(j);
            mp[word] = cnt++;
            word.clear();
        }
    }
}

void go() {
    string s;
    cin >> s;
    cout << mp[s] << endl;
}


int main(){
    _AdHam;
    pre();
    T;
    return 0;
}