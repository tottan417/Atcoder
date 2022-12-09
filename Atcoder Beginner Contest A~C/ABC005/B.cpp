#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    int ans = 100;
    for(int i=0; i<n; i++) {
        int t; cin >> t;
        ans = min(ans, t);
    }
    printf("%d\n", ans);

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-09 11:04:22
*/