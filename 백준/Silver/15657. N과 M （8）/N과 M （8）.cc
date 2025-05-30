#include <bits/stdc++.h>
using namespace std;

int n, m;
int output[8];
int arr[8];

void func(int cur){ // 현재 선택한 수의 개수
    if(cur == m){
        // 저장된 배열 출력 후 return
        for(int i=0; i<m; i++){
            cout << output[i] << ' ';
        }
        cout << '\n';
        return;
    }

    for(int i=0; i<n; i++){
        if(cur-1>=0){ // cur != 0 일 때, 비내림차순 조건문
            if(output[cur-1] <= arr[i]){
                output[cur] = arr[i]; // 차례대로 넣기
                func(cur+1); // 다음 수 고르기
            }
        } 
        else{
            output[cur] = arr[i]; // 차례대로 넣기
            func(cur+1); // 다음 수 고르기
        } 
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> arr[i];

    // 정렬 (오름차순)
    sort(arr, arr+n, less<>());

    func(0);

    return 0;
}