#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];

void func(int cur){ // 현재 선택한 수의 개수
    if(cur==m){
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
            // arr 배열에 기록해둔 수를 출력
        }
        cout << '\n';
        return;
    }
    int st = 1; // 시작 지점
    if(cur != 0) st = arr[cur-1] + 1;
    for(int i=st; i<=n; i++){
        arr[cur] = i;
        func(cur+1); // 다음 수 정하기
    } 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);

    return 0;
}