#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    vector<int> arr(N), nge(N, -1);
    stack<int> s;

    for(int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // 배열의 끝에서부터 역순으로 순회
    for(int i = N - 1; i >= 0; i--) {
        // 스택이 비어 있지 않으면서 현재 원소보다 작거나 같은 값은 pop
        while(!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        
        // 스택이 비어있지 않으면 top이 다음 큰 수
        if(!s.empty()) {
            nge[i] = s.top();
        }
        
        // 현재 원소를 스택에 push
        s.push(arr[i]);
    }

    for(int i = 0; i < N; i++) {
        cout << nge[i] << " ";
    }
    
    return 0;
}