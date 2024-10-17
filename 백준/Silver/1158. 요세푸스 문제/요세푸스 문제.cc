#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    int k;

    cin >> num >> k;

    vector<int> V, answer;
    for(int i=1; i<=num; i++) V.push_back(i);

    for(int i=0; answer.size() < num; i++){ // 정답벡터 원소가 n개일 때 종료
        if(i%k == k-1) answer.push_back(V[i]);
        else V.push_back(V[i]); // 다시 맨 뒤로 보내기
    }

    // 출력
    cout << "<";
    for(int i=0; i<num; i++){
        if(i==num-1) cout << answer[i];
        else cout << answer[i] << ", ";
    }
    cout << ">";
    
}