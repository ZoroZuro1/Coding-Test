#include <bits/stdc++.h>
using namespace std;

int board_ori[21][21]; // 입력받은 보드
int board_dif[21][21]; // 이동할 보드
int N; // 보드 크기

void rotate() // 시계방향으로 90도 회전
{
    int tmp[21][21];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            tmp[i][j] = board_dif[i][j];
        }
    }
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            board_dif[i][j] = tmp[N-1-j][i];
        }
    }
}

void tilt(int dir)
{
    while(dir--) rotate(); // dir 숫자만큼 회전 (모든 방향 대응)
    for(int i=0; i<N; i++){
        int tilted[21] = {}; // board_dif를 왼쪽으로 기울인 결과 저장할 변수
        int idx = 0;  // tilted 배열에서 어디에 삽입해야 하는지 가리키는 변수
        for(int j=0; j<N; j++){
            if(board_dif[i][j] == 0) continue;
            if(tilted[idx] == 0) tilted[idx] = board_dif[i][j]; // 삽입할 위치가 비어있는 경우, 그냥 삽입
            else if(tilted[idx] == board_dif[i][j]) tilted[idx++] *= 2; // 같은 값을 갖는 블록이 충돌할 경우
            else tilted[++idx] = board_dif[i][j]; // 다른 값을 갖는 블록이 충돌
        }
        for(int j=0; j<N; j++) board_dif[i][j] = tilted[j]; // board_dif에 tilted를 덮어씀
    }

}

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    // 입력
    cin >> N;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> board_ori[i][j];
        }
    }

    int mx = 0;
    for(int tmp=0; tmp<1024; tmp++){ // 브루트포스 알고리즘,  4^5 = 1024만큼 시뮬레이션
        // 1. 원래 보드로 복구
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                board_dif[i][j] = board_ori[i][j]; 
            }
        }
        int brute = tmp;
        for(int i=0; i<5; i++){ // tmp를 4진수로 보고, 각 자리수를 이동 방향으로 해석
            int dir = brute % 4; // 맨 마지막 자리수
            brute /= 4; // 다름 자리수
            tilt(dir);
        }
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                mx = max(mx, board_dif[i][j]);
            }
        }
    }

    cout << mx;

    return 0;
}