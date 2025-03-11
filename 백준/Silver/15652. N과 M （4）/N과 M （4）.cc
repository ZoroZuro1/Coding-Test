#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[8];
int init = 1;

void func(int cur){ // 현재 선택한 수의 개수
    if(cur == m){
        // 저장된 배열 출력 후 return
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int st; // 시작 숫자
    if(cur-1 < 0) st = init; // 처음 시작하는 경우 따로 초기화
    else st = arr[cur-1]; // 그 외엔 이전에 선택된 숫자부터 시작

    for(int i=st; i<=n; i++){
        arr[cur] = i; // 비내림차순 차례대로 넣기
        func(cur+1); // 다음 수 고르기
        init++;
    } 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);

    return 0;
}