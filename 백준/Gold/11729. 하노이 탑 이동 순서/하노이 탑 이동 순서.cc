#include <bits/stdc++.h>
using namespace std;


void func(int a, int b, int n);

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;
    cout << (1<<k) - 1 << '\n'; // 원판 이동 횟수의 일반식. 1을 k칸 밀어 2의 k승 - 1.
    func(1, 3, k);
    
    return 0;
}

void func(int a, int b, int n){
    if(n==1) {
        cout << a << ' ' << b << '\n';
        return;
    }
    // a 판에서 b가 아닌 판으로 n-1개 원판을 옮김
    func(a, 6-a-b, n-1); // 1번, 2번, 3번 장대이기 때문에 a도 b도 아닌 원판을 6-a-b로 함
    cout << a << ' ' << b << '\n';
    // a와 b가 아닌 판에서 b 판으로 다시 n-1개 원판을 옮김
    func(6-a-b, b, n-1);
}
