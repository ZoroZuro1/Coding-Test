#include <bits/stdc++.h>
using namespace std;

int n;
int output[13];
int arr[13]; // 입력받은 배열
bool isused[13];

void func(int cur){ // 현재 선택한 수의 개수
    if(cur == 6){
        // 저장된 배열 출력 후 return
        for(int i=0; i<6; i++){
            cout << output[i] << ' ';
        }
        cout << '\n';
        return;
    }

    int st = cur-1;
    if(st<0) {
        st = 0;
        output[st] = 0;
    }

    for(int i=st; i<n; i++){
        if(!isused[i] && arr[i] >= output[st]){
            output[cur] = arr[i];
            isused[i] = true;
            func(cur + 1);
            isused[i] = false;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        cin >> n;
        if(n==0) break;
        for(int i=0; i<n; i++)
            cin >> arr[i];
        sort(arr, arr+n, less<>()); // 정렬 (오름차순)
        func(0);
        cout << '\n';
    }
    
    return 0;
}