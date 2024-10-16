#include <bits/stdc++.h>
using namespace std;
int room[2][6];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int answer = 0;
    int num, max;
    int sex, grade;
    
    cin >> num >> max;

    for(int i=0; i<num; i++){
        cin >> sex >> grade;
        if(room[sex][grade] == 0) answer++;
        room[sex][grade]++;
        if(room[sex][grade] > max){
            answer++;
            room[sex][grade] = 1;
        }
    }

    cout << answer;
}