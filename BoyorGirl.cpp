#include<bits/stdc++.h>
#define _AdHam ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define vec vector

typedef long long ll;

using namespace std;

int main(){
    _AdHam;
    
    string name;
    
    cin >> name;
    
    int size = name.size();
    
    set<char> st;
    
    for (int i = 0; i < size; i++) {
        st.insert(name[i]);
    }

    (st.size() & 1)? cout << "IGNORE HIM!\n" : cout << "CHAT WITH HER!\n";

    return 0;
}