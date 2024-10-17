#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> S;
    int value;

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> value;
        if(value == 0){
            if(!S.empty()) S.pop();
        }
        else S.push(value);
    }

    int sum = 0;
    for(;!S.empty();){
        sum += S.top();
        S.pop();
    }

    cout << sum;
}