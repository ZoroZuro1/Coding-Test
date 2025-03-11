#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[7];

void func(int cur){ // 현재 선택한 수의 개수
    if(cur == m){
        // 저장된 배열 출력 후 return
        for(int i=0; i<m; i++){
            cout << arr[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=1; i<=n; i++){
        arr[cur] = i; // 1부터 차례대로 넣기
        func(cur+1); // 다음 수 고르기
    } 
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    func(0);

    return 0;
}