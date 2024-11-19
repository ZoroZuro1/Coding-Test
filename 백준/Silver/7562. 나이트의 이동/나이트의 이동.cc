#include <bits/stdc++.h>
using namespace std;

#define X first;
#define Y second;

int board[302][302];
queue<pair<int, int>> Q;

int dx[8] = {1, 2, -1, -2, 2, 1, -1, -2};
int dy[8] = {2, 1, 2, 1, -1, -2, -2, -1};

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // 테스트케이스 입력
    int n = 0;
    cin >> n;

    // 테스트케이스만큼 수행
    for(int test=0; test<n; test++){
        int size = 0;
        cin >> size;
        while (!Q.empty())
        {
            Q.pop();
        }
        
        bool exitflag = false;
        // board 채우기
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                board[i][j] = -1;
            }
        } 

        // 나이트 초기 위치
        int ix, iy;
        cin >> ix >> iy;
        board[ix][iy] = 0;
        Q.push({ix, iy});

        // 나이트 목표 위치
        int gx, gy;
        cin >> gx >> gy;
        
        // BFS
        while (!Q.empty())
        {
            pair<int, int> cur = Q.front(); Q.pop();
            
            if(ix == gx && iy == gy){
                cout << board[cur.first][cur.second] << "\n";
                exitflag = true;
                break;
            }

            for(int dir=0; dir<8; dir++){
                int nx = cur.first + dx[dir];
                int ny = cur.second + dy[dir];

                if(nx >= size || nx < 0 || ny >= size || ny < 0) continue;
                if(nx == gx && ny == gy){
                    cout << board[cur.first][cur.second] + 1 << "\n";
                    exitflag = true;
                    break;
                }
                if(board[nx][ny] != -1) continue;
                board[nx][ny] = board[cur.first][cur.second] + 1;
                Q.push({nx, ny});
            }

            if(exitflag) break;
        }
        
    }

    return 0;
}