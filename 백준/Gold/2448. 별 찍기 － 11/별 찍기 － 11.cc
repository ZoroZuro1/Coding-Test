#include <bits/stdc++.h>
using namespace std;

void func(int k, int x, int y);
char board[6200][6200];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    // board에 공백 채우기
    for(int i=0; i<2*n; i++){
        for(int j=0; j<2*n; j++){
            board[i][j] = ' ';
        }
    }

    func(n, n-1, 0);

    // 출력
    for(int i=0; i<n; i++){
        for(int j=0; j<2*n; j++)
            cout << board[j][i];
        cout << '\n';
    }

    return 0;
}

void func(int k, int x, int y){
    if(k == 3){
        // 작은 삼각형 그리기
        board[x][y] = '*';
        board[x+1][y+1] = '*';
        board[x-1][y+1] = '*';
        board[x][y+2] = '*';
        board[x+1][y+2] = '*';
        board[x-1][y+2] = '*';
        board[x+2][y+2] = '*';
        board[x-2][y+2] = '*';
        return;
    }

    func(k/2, x, y);
    func(k/2, x-k/2, y+k/2);
    func(k/2, x+k/2, y+k/2);
}