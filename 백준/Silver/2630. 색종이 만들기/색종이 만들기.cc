#include <bits/stdc++.h>
using namespace std;

void func(int k, int x, int y);
int answer[2];
int board[128][128];
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
        }
    }

    func(n, 0, 0);

    cout << answer[0] << '\n' << answer[1];

    return 0;
}

void func(int k, int x, int y){
    if(k==1){
        // 하나씩 숫자 세서 정답에 더함
        answer[board[x][y]]++;
        //cout << "하나씩 세는 중. : " << board[x][y] << '\n';
        return;
    }

    // 모든 번호가 같은지 확인하고 수를 더해주거나, func(k/2)을 호출함.
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            if(board[x][y] != board[x+i][y+j]){
                for(int ix=0; ix<2; ix++){
                    for(int iy=0; iy<2; iy++){
                        func(k/2, x+(k/2)*ix, y+(k/2)*iy);
                    }
                }
                return;
            }
        }
    }

    //cout << "반복문 탈출, borad[x][y] = " << board[x][y] << '\n';
    answer[board[x][y]]++;
}