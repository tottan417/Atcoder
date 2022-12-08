#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int n; cin >> n; n %= 30;
    char s[6];
    for(int i=0; i<6; i++) s[i] = i+1;
    for(int i=0; i<n; i++) swap(s[i%5], s[i%5+1]);
    for(int i=0; i<6; i++) printf("%d", s[i]);
    cout << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 18:14:31
*/