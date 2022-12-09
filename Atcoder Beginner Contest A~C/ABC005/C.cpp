#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int t; cin >> t;
    int n; cin >> n;
    int a[n]; for(int i=0; i<n; i++) cin >> a[i];
    int m; cin >> m;
    int b[m]; for(int i=0; i<m; i++) cin >> b[i];

    int k = 0;
    for(int i=0; i<n; i++) {
        if(a[i]<=b[k] && b[k]<=a[i]+t) k++;
        if(k == m) {cout << "yes" << endl; return 0;}
    }

    cout << "no" << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-09 11:10:50
*/