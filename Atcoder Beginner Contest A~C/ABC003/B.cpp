#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string s, t; cin >> s >> t;
    string u = "@atcoder";
    bool flag = true;

    for(int i=0; i<s.size(); i++) {
        if (s[i] == '@') {
            if(u.find(t[i]) == string::npos) flag = false;
            else continue;
        } else if (t[i] == '@') {
            if(u.find(s[i]) == string::npos) flag = false;
            else continue;
        } else if (s[i] != t[i]) flag = false;
    }
    if(flag) cout << "You can win" << endl;
    else cout << "You will lose" << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 11:36:14
*/