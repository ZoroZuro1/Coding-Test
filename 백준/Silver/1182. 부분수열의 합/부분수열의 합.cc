#include <bits/stdc++.h>
using namespace std;

int n, s;
int arr[30];
int cnt = 0;

void func(int cur, int tot){
    if(cur==n){
        if(tot == s) cnt++;
        return;
    }
    func(cur+1, tot); // 숫자를 더하지 않는다.
    func(cur+1, tot+arr[cur]); // 숫자를 더한다.
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    func(0,0);
    if(s == 0) cnt--; // s가 0일 때는 공집합일 경우를 제외
    cout << cnt;

    return 0;
}