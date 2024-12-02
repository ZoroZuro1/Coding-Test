#include <bits/stdc++.h>
using namespace std;

char board[27][27];
int vis[27][27];

int dx[4] = {1, 0 , -1, 0};
int dy[4] = {0, 1, 0, -1};

queue<pair<int, int>> Q;

#define X first
#define Y second

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0;
    cin >> n;

    // board 채우기
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            char temp;
            cin >> temp;
            board[i][j] = temp;
            vis[i][j] = -1;
        }
    }

    vector<int> ans;
    int ans_size = 0;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == '1' && vis[i][j] == -1){
                Q.push({i, j});
                ans.push_back(1);
                vis[i][j] = 0;
                ans_size++;
                
                //cout << i+1 << "," << j+1 << "에서 1 발견\n";

                while (!Q.empty())
                {
                    pair<int, int> cur = Q.front(); Q.pop();
                    
                    for(int dir=0; dir<4; dir++){
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];

                        if(nx >= n || nx < 0 || ny >= n || ny < 0) continue;
                        if(board[nx][ny] == '1' && vis[nx][ny] == -1){
                            Q.push({nx, ny});
                            ans[ans_size-1]++;
                            vis[nx][ny] = 0;
                            //cout << nx+1 << "," << ny+1 << "에서 1 추가 :" << ans[ans_size-1] << "\n";
                        }
                    }
                }
                
            }
        }
    }

    cout << ans_size << "\n";
    sort(ans.begin(), ans.end());
    for(int i=0; i<ans_size; i++){
        cout << ans[i] << "\n";
    }

}
