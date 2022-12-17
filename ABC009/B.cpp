#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> vec;
    for(int i=0; i<n; i++) {
        int a; cin >> a;
        auto res = find(vec.begin(), vec.end(), a);
        if(res == vec.end()) vec.push_back(a);
    }
    sort(vec.rbegin(), vec.rend());

    printf("%d\n", vec[1]);

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-18 15:04:34
*/