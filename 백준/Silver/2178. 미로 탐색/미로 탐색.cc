#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[102][102];
bool vis[102][102];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int n, m; // n = 행의 수, m = 열의 수

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> m;
    cin.ignore();

    string linestr;
    for(int i=0; i<n; i++){
        getline(cin, linestr);
        for(int j=0; j<m; j++){
            board[i][j] = linestr[j] - '0';
        }
    }

    queue<pair<int,int>> Q;
    queue<int> lengthQ;
    vis[0][0] = 1;
    Q.push({0, 0});
    lengthQ.push(1);
    int length = 1;
    bool errorflag = false;

    while(!Q.empty() && !errorflag){
        pair<int,int> cur = Q.front(); Q.pop();
        length = lengthQ.front(); lengthQ.pop(); 
        length++;

        for(int dir = 0; dir <  4; dir++){ // 상하좌우로 반복
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if(vis[nx][ny] || board[nx][ny] != 1) continue;
            vis[nx][ny] = 1; // 방문 여부 명시
            Q.push({nx, ny});
            lengthQ.push(length);

            if(nx == n-1 && ny == m-1){
                errorflag = true;
                break;
            }
        }
    }
    cout << length;
    return 0;
}