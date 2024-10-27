#include <bits/stdc++.h>
using namespace std;

stack<int> buildings;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    long long h;
    long long answer = 0;

    // 입력
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> h;
        while (!buildings.empty() && buildings.top() <= h)
        {
            buildings.pop();
        }
        answer += buildings.size();
        buildings.push(h);
    } 

    cout << answer;
    return 0;
}