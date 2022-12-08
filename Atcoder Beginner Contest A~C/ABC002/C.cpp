#include<bits/stdc++.h>
using namespace std;

int main(void) {
    double xa, ya, xb, yb, xc, yc; cin >> xa >> ya >> xb >> yb >> xc >> yc;
    xa -= xc; ya -= yc;
    xb -= xc; yb -= yc;
    printf("%f\n",abs(xa*yb - xb*ya) / 2);

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-08 11:00:24
*/