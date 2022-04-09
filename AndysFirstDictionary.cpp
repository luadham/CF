#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

bool isChar(char c) {
    return c >= 'a' && c <= 'z';
}


int main(){
    _AdHam;
    string s;
    set<string> dic;

    while (cin >> s) {
        string temp = "";
        for (int i = 0; i < s.size(); ++i) {
            char c = tolower(s[i]);
            if (isChar(c))
                temp += c;
            else if (temp != "") {
                dic.insert(temp);
                temp = "";
            }
        }
        if (temp != "")
            dic.insert(temp);
    }

    for (auto i : dic) {
        cout << i << endl;
    }
    return 0;
}