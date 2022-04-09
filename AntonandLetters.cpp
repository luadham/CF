#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;
    string s;
    getline(cin, s);
    set<char> st;
    int size = s.size();
    for (int i = 0; i < size; i++) {
        if (s[i] == ',' || s[i] == '{' || s[i] == '}' || s[i] == ' ') continue;
        st.insert(s[i]);
    }
    cout << st.size() << endl;
    return 0;
}