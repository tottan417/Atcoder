#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    map<string, int> m;
    for(int i=0; i<n; i++) {
        string s; cin >> s;
        if(m.count(s)) m[s]++;
        else m[s] = 1;
    }

    int ans = 0; string ans_s = "";
    for(auto x: m) {
        if(ans<x.second) {
            ans = x.second;
            ans_s = x.first;
        }
    }
    cout << ans_s << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-13 09:00:51
*/