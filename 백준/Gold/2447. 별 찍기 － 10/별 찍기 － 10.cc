#include <bits/stdc++.h>
using namespace std;

void func(int k, int x, int y);
char board[2188][2188];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    func(n, 0, 0);

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cout << board[i][j];
        cout << '\n';
    }

    return 0;
}

void func(int k, int x, int y){

    //cout << "fun 호출 >> k:" << k << ", x:" << x << ", y:" << y << '\n';

    if(k/3 == 1){
        for(int ix=0; ix<k; ix++){
            for(int iy=0; iy<k; iy++){
                if((ix>=k/3 && ix<k-(k/3))&&(iy>=k/3 && iy<k-(k/3))) board[x+ix][y+iy] = ' ';
                else board[x+ix][y+iy] = '*';
            }
        }
        return;
    }

    for(int ix=0; ix<k; ix+=k/3){
        for(int iy=0; iy<k; iy+=k/3){
            if(ix!=k/3 || iy!=k/3) func(k/3, x+ix, y+iy);
        }
    }
    
    for(int i=k/3; i<k-(k/3); i++){
        for(int j=k/3; j<k-(k/3); j++){
            board[x+i][y+j] = ' ';
        }
    }

}