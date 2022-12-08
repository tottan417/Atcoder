#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    if(n%2) cout << (n+1)/2*10000 << endl;
    else cout << n/2*10000+5000 << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 11:08:25
*/