#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int artnum = 0;
int artmaxsize = 0;

int n, m; // n = 행의 수, m = 열의 수

void BFS(int xstart, int ystart){
    int size = 1;
    queue<pair<int,int>> Q;
    vis[xstart][ystart] = 1;
    Q.push({xstart, ystart});
    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop();
        for(int dir = 0; dir <  4; dir++){ // 상하좌우로 반복
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1; // 방문 여부 명시
            Q.push({nx, ny});
            size++;
        }
    }
    if(artmaxsize < size) artmaxsize = size;
    artnum++;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            int temp;
            cin >> temp;
            board[i][j] = temp;
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if( !vis[i][j] && board[i][j] == 1) BFS(i, j);
        }
    }

    cout << artnum << "\n" << artmaxsize;

    return 0;
}