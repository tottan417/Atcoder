#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int deg, dis; cin >> deg >> dis;
    deg *= 10;
    double w = dis / 60.0;
    if(w<0.25) {
        cout << 'C' << ' ' << 0 << endl;
        return 0;
    }

    if(deg < 1125) printf("N ");
    else if(deg < 3375) printf("NNE ");
    else if(deg < 5625) printf("NE ");
    else if(deg < 7875) printf("ENE ");
    else if(deg < 10125) printf("E ");
    else if(deg < 12375) printf("ESE ");
    else if(deg < 14625) printf("SE ");
    else if(deg < 16875) printf("SSE ");
    else if(deg < 19125) printf("S ");
    else if(deg < 21375) printf("SSW ");
    else if(deg < 23625) printf("SW ");
    else if(deg < 25875) printf("WSW ");
    else if(deg < 28125) printf("W ");
    else if(deg < 30375) printf("WNW ");
    else if(deg < 32625) printf("NW ");
    else if(deg < 34875) printf("NNW ");
    else printf("N ");

    if(w < 1.55) cout << 1 << endl;
    else if(w < 3.35) cout << 2 << endl;
    else if(w < 5.45) cout << 3 << endl;
    else if(w < 7.95) cout << 4 << endl;
    else if(w < 10.75) cout << 5 << endl;
    else if(w < 13.85) cout << 6 << endl;
    else if(w < 17.15) cout << 7 << endl;
    else if(w < 20.75) cout << 8 << endl;
    else if(w < 24.45) cout << 9 << endl;
    else if(w < 28.45) cout << 10 << endl;
    else if(w < 32.65) cout << 11 << endl;
    else cout << 12 << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-06 23:11:14
*/