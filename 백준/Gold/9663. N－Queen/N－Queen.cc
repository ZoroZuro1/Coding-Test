#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
int n;
bool isused1[40]; // y
bool isused2[40]; // x+y
bool isused3[40]; // x-y+n-1 (음수 인덱스 방지)

void func(int cur){
    if(cur==n){
        cnt++;
        return;
    }

    for(int i=0; i<n; i++){
        if(isused1[i] || isused2[i+cur] || isused3[cur-i+n-1])
            continue;
        isused1[i] = 1;
        isused2[i+cur] = 1;
        isused3[cur-i+n-1] = 1;
        func(cur+1); // 함수를 들어갔다가 나올 때 bool 값을 다시 false로 바꿔줘야 함.
        isused1[i] = 0;
        isused2[i+cur] = 0;
        isused3[cur-i+n-1] = 0;
    }
    
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    func(0);
    cout << cnt;

    return 0;
}