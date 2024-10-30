#include <bits/stdc++.h>
using namespace std;

void left(deque<int> &D){
    D.push_back(D.front());
    D.pop_front();
}

void right(deque<int> &D){
    D.push_front(D.back());
    D.pop_back();
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    deque<int> D;
    int N; // 큐의 크기
    int M; // 뽑으려는 수의 위치
    int answer = 0; // 2,3번 연산을 수행한 횟수

    cin >> N;

    for(int i=1; i<=N; i++){
        D.push_back(i);
    }

    cin >> M;

    for(int i=0; i<M;i++){

        int temp;
        cin >> temp;

        //cout << "현재 front: " << D.front() << " | 찾을 수: " << temp << "\n";

        if(temp == D.front()){
            D.pop_front();
        }
        else {
            int idx = find(D.begin(), D.end(), temp) - D.begin(); // idx : arr[i]가 있는 위치
            while (D.front() != temp)
            {
                if(idx > (int)D.size() - idx){
                    right(D);
                }
                else {
                    left(D);
                }
                answer++;
            }
            D.pop_front();
        }
    }

    cout << answer;

    return 0;
}