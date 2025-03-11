#include <bits/stdc++.h>
using namespace std;

int n, m;
int output[7];
int arr[7]; // 입력받은 배열

void func(int cur){ // 현재 선택한 수의 개수
    if(cur == m){
        // 저장된 배열 출력 후 return
        for(int i=0; i<m; i++){
            cout << output[i] << ' ';
        }
        cout << '\n';
        return;
    }
    int flag = 0;
    for(int i=0; i<n; i++){
        if(flag != arr[i]){ // 이전 수열의 마지막 항과 새로운 수열의 마지막 항이 같으면 중복 수열
            output[cur] = arr[i];
            flag = output[cur];
            func(cur + 1);
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