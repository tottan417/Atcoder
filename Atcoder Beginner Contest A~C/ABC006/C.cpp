#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m; cin >> n >> m;
    int ans[] = {0, 0, 0};
    if(m%2) {
        n--; m -= 3;
        ans[1]++;
    }

    if(n*2 > m || m > n*4) cout << "-1 -1 -1" << endl;
    else {
        for(int i=0; i<=n; i++) {
            if(4*i + 2*(n-i) == m) {ans[0] = (n-i); ans[2] = i;}
        }
        cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;
    }

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-12 21:22:09
*/