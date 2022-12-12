#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    int tri[1000000+2];
    tri[0] = 0; tri[1] = 0; tri[2] = 1;
    for(int i=3; i<n; i++) {
        tri[i] = (tri[i-1] + tri[i-2] + tri[i-3]) % 10007;
    }
    cout << tri[n-1] << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-12 21:08:50
*/