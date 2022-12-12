#include<bits/stdc++.h>
using namespace std;

int main(void) {
    int R, C; cin >> R >> C;
    int sy, sx; cin >> sy >> sx; sy--;sx--;
    int gy, gx; cin >> gy >> gx; gy--;gx--;
    char c[R][C];
    for(int i=0; i<R; i++) for(int j=0; j<C; j++) cin >> c[i][j];

    vector<vector<int>> flag(R, vector<int>(C, -1)); flag[sy][sx] = 0;
    deque<vector<int>> deq; deq.push_back({sy, sx});

    while(!deq.empty()) {
        vector<int> xy = deq.front();
        deq.pop_front();
        int y = xy[0], x = xy[1];
        if(c[y+1][x]=='.' && flag[y+1][x]==-1) {
            flag[y+1][x] = flag[y][x]+1;
            deq.push_back({y+1, x});
        }
        if(c[y-1][x]=='.' && flag[y-1][x]==-1) {
            flag[y-1][x] = flag[y][x]+1;
            deq.push_back({y-1, x});
        }
        if(c[y][x+1]=='.' && flag[y][x+1]==-1) {
            flag[y][x+1] = flag[y][x]+1;
            deq.push_back({y, x+1});
        }
        if(c[y][x-1]=='.' && flag[y][x-1]==-1) {
            flag[y][x-1] = flag[y][x]+1;
            deq.push_back({y, x-1});
        }
    }

    cout << flag[gy][gx] << endl;

    return 0;
}

/*
- author: tottan
- college: University of Hyogo
- organization: DA研(https://uoh-dakken.com)
- date: 2022-12-12 22:01:59
*/