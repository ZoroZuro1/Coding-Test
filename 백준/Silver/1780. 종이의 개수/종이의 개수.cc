#include <bits/stdc++.h>
using namespace std;

void func(int k, int x, int y);
int minus1, zero, one;
int board[2188][2188];
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

    cout << minus1 << '\n' << zero << '\n' << one;

    return 0;
}

void func(int k, int x, int y){
    if(k==1){
        if(x%3!=0) return;
        if(y%3!=0) return;

        // 하나씩 숫자 세서 정답에 더함
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                if(board[x+i][y+j] == -1) minus1++;
                if(board[x+i][y+j] == 0) zero++;
                if(board[x+i][y+j] == 1) one++;
                //cout << "하나씩 세는 중. : " << board[x+i][y+j] << '\n';
            }
        }
        return;
    }

    // 모든 번호가 같은지 확인하고 수를 더해주거나, func(k/3)을 호출함.
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            if(board[x][y] != board[x+i][y+j]){
                for(int ix=0; ix<3; ix++){
                    for(int iy=0; iy<3; iy++){
                        func(k/3, x+(k/3)*ix, y+(k/3)*iy);
                    }
                }
                return;
            }
        }
    }

    //cout << "반복문 탈출, borad[x][y] = " << board[x][y] << '\n';
    if(board[x][y] == -1) minus1++;
    if(board[x][y] == 0) zero++;
    if(board[x][y] == 1) one++;
}