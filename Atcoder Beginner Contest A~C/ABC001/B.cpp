#include<bits/stdc++.h>
using namespace std;
 
int main(void) {
    int m; cin >> m;
    if(m < 100) printf("00");
    else if(m <= 5000) printf("%02d", m/100);
    else if(m <= 30000) printf("%d", m/1000+50);
    else if(m <= 70000) printf("%d", (m/1000-30)/5 + 80);
    else printf("89");
    printf("\n");
 
    return 0;
}
 
/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-06 23:00:15
*/