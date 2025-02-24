#include <bits/stdc++.h>
using namespace std;


int func(int n, int r, int c);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, r, c;
    cin >> n >> r >> c;
    cout << func(n, r, c);
    
    return 0;
}

int func(int n, int r, int c){
    if(n==0) return 0;
    int half = 1<<(n-1); // 2의 (n-1)승. 한 변 길이의 절반.
    // n-1의 계산 결과를 n에 사용하는 재귀 방법.
    if(r < half && c < half) return func(n-1, r, c);
    if(r < half && c >= half) return half*half + func(n-1, r, c-half);
    if(r >= half && c < half) return 2*half*half + func(n-1, r-half, c);
    return 3*half*half + func(n-1, r-half, c-half);
}
