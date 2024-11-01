#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1002][1002];
int firetime[1002][1002];
int jihuntime[1002][1002];
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n,m;
queue<pair<int,int>> FQ;
int jx, jy; // 지훈이 초기 위치

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    queue<pair<int,int>> FQ;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            firetime[i][j] = -1;
            jihuntime[i][j] = -1;
            if(board[i][j] == 'F'){
                FQ.push({i,j});
                firetime[i][j] = 0;
            }
            else if(board[i][j] == 'J'){
                jx = i;
                jy = j;
            }
        }
    }

    // 불에 대한 bfs
    while (!FQ.empty())
    {
        pair<int,int> cur = FQ.front(); FQ.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(board[nx][ny] != '.') continue;
            if(firetime[nx][ny] != -1)
                firetime[nx][ny] = min(firetime[nx][ny], (firetime[cur.X][cur.Y] + 1));
            else {
                firetime[nx][ny] = firetime[cur.X][cur.Y] + 1;
                FQ.push({nx, ny});
            }
        }

    }
    

    // 지훈이에 대한 bfs
    queue<pair<int,int>> JQ;
    JQ.push({jx, jy});
    jihuntime[jx][jy] = 0;
    while (!JQ.empty())
    {
        pair<int,int> cur = JQ.front(); JQ.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) {
                // 탈출 성공
                cout << jihuntime[cur.X][cur.Y] + 1;
                return 0;
            }
            if( jihuntime[nx][ny] != -1 || board[nx][ny] != '.') continue;
            if(firetime[nx][ny] <= jihuntime[cur.X][cur.Y]+1 && firetime[nx][ny] != -1) continue;
            JQ.push({nx, ny});
            jihuntime[nx][ny] = jihuntime[cur.X][cur.Y] + 1;
        }
    }
    // 탈출 실패
    cout << "IMPOSSIBLE";
    
    return 0;
}