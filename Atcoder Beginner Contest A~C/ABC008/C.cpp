#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    vector<pair<int, int>> vec(n);
    for(int i=0; i<n; i++) {
        int c; cin >> c;
        vec[i] = make_pair(c, 0);
    }

    for(int i=0; i<n; i++) for(int j=0; j<n; j++) {
        if(i==j) continue;
        if(!(vec[i].first%vec[j].first)) vec[i].second++;
    }

    double ans = 0.0;
    for(auto x: vec) {
        double cnt = 1.0;
        for(int i=1; i<=n; i++) cnt *= i;
        if(x.second%2) cnt /= 2.0;
        else if(x.second!=0) cnt *= ((double)x.second+2) / ((double)2*x.second+2);
        ans += cnt;
    }

    for(int i=1; i<=n; i++) ans /= i;
    printf("%.7f\n", ans);

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-13 19:15:54
*/