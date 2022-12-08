#include<bits/stdc++.h>
using namespace std;

int main(void) {
    string w; cin >> w;
    string s = "aiueo";
    for(int i=0; i<w.size(); i++) {
        if(s.find(w[i]) == string::npos) cout << w[i];
    }
    cout << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 10:52:11
*/