#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[1002][1002];
int dist[1002][1002];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int n;
int m;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> m >> n;
    queue<pair<int, int>> Q;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> board[i][j];
            if(board[i][j] == 1) Q.push({i, j});
            if(board[i][j] == 0) dist[i][j] = -1;
        }
    }

    while (!Q.empty())
    {
        pair<int,int> cur = Q.front(); Q.pop();
        for(int dir=0; dir<4; dir++){
            int nx = cur.X + dx[dir];
            int ny= cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >=m) continue;
            if(dist[nx][ny] >= 0) continue; // 이미 방문했거나 갈 수 없는 길
            dist[nx][ny] = dist[cur.X][cur.Y] + 1; // 탐색 시작한 칸으로부터 1일 뒤
            Q.push({nx,ny});
        }
    }
    
    int ans = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dist[i][j] == -1){
                cout << -1; // 도달하지 못한 0이 있는 경우 실패
                return 0;
            }
            ans = max(ans, dist[i][j]);
        }
    }
    cout << ans;
    
    return 0;
}