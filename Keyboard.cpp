#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

char arr[3][10] = {
    {'q','w','e','r','t','y','u','i','o','p'},
    {'a','s','d','f','g','h','j','k','l',';'},
    {'z','x','c','v','b','n','m',',','.','/'}
};

pair<int, int> getPos(char c) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            if (arr[i][j] == c) return {i, j};
        }
    }
    return {};
}


int main(){
    _AdHam;
    char pos;
    string s;
    cin >> pos >> s;
    int size = s.size();
    int dir = (pos == 'R')? -1 : 1;
    pair<int, int> p;
    for (int i = 0; i < size; i++) {
        p = getPos(s[i]);
        if ((p.second == 0 && pos == 'R') || (p.second == 9 && pos == 'L')) {
            cout << s[i];
        } else {
            cout << arr[p.first][p.second + dir];
        }
    }
    cout << endl;
    return 0;
}