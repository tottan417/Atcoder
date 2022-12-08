#include<bits/stdc++.h>
using namespace std;

int main(void) {
    char c[4][4];
    for(int i=0; i<4; i++) for(int j=0; j<4; j++) cin >> c[i][j];

    for(int i=3; i>=0; i--) {
        for(int j=3; j>=0; j--) {
            cout << c[i][j];
            if(j==0) cout << endl;
            else cout << ' ';
        }
    }

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 17:56:28
*/