#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n, k; cin >> n >> k;
    vector<int> r(n);
    for(int i=0; i<n; i++) cin >> r[i];
    sort(r.begin(), r.end());
    double c = 0;
    for(int i=n-k; i<n; i++) {
        c = (c+r[i])/2;
    }
    printf("%f\n", c);

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 12:05:38
*/