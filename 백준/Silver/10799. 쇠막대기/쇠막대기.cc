#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int answer = 0;
    int openlaser = 0;
    
    string str;
    getline(cin, str);

    for(int i=1; i<(int)str.size(); i++){
        if(str[i] == '(') {
            if(str[i-1] == '(') {// 쇠막대기 시작
                openlaser++;
                answer++;
            } 
        }
        else { // ')'
            if(str[i-1] == '('){ // 레이저 발사
                answer += openlaser;
            }
            else {
                openlaser--;
            }
        }    
    }
    
    cout << answer;

    return 0;
}