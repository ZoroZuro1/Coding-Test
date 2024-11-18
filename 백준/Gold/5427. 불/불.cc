#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

char board[1002][1002];
int firetime[1002][1002]; // 불의 도달 시간
int sangeuntime[1002][1002]; // 상근이 도달 시간
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int>> FQ;
queue<pair<int, int>> SQ;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // testcase 개수 입력
    int n = 0;
    cin >> n;

    // testcase만큼 수행
    for(int testcase=0; testcase<n; testcase++){
        while(!FQ.empty()) FQ.pop(); // 큐 비우기
        while (!SQ.empty()) SQ.pop();

        bool exitflag = false;
        int y = 0;
        int x = 0;

        cin >> y >> x;
        
        // board 입력
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++){
                cin >> board[i][j]; 
                firetime[i][j] = -1;
                sangeuntime[i][j] = -1;
                if(board[i][j] == '*') {
                    firetime[i][j] = 0;
                    FQ.push({i,j});
                }
                if(board[i][j] == '@'){
                    sangeuntime[i][j] = 0;
                    SQ.push({i,j});
                }
            }
        }

        // fire에 대한 BFS
        while(!FQ.empty()){
            pair<int, int> cur = FQ.front(); FQ.pop();
            
            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if(nx >= x || nx < 0 || ny >= y || ny < 0) continue;
                if(board[nx][ny] != '.') continue;
                if(firetime[nx][ny] != -1) firetime[nx][ny] = min(firetime[nx][ny], (firetime[cur.X][cur.Y] + 1));
                else {
                    firetime[nx][ny] = firetime[cur.X][cur.Y] + 1;
                    FQ.push({nx, ny});
                }

            }
        }

        // 상근이에 대한 bfs
        while (!SQ.empty() && !exitflag)
        {
            pair<int, int> cur = SQ.front(); SQ.pop();

            for(int dir=0; dir<4; dir++){
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];

                if(nx >= x || nx < 0 || ny >= y || ny < 0){
                    // 탈출 성공
                    cout << sangeuntime[cur.X][cur.Y] + 1 << "\n";
                    exitflag = true;
                    break;
                }
                if(board[nx][ny] != '.' || sangeuntime[nx][ny] != -1) continue;
                if(firetime[nx][ny] == -1 || firetime[nx][ny] > sangeuntime[cur.X][cur.Y] + 1) {
                    sangeuntime[nx][ny] = sangeuntime[cur.X][cur.Y] + 1;
                    SQ.push({nx, ny});
                }
            }
        }

        if(!exitflag) cout << "IMPOSSIBLE\n";
    }

}