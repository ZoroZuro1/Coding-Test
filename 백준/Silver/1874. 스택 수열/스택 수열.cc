#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    cin >> num;

    vector<string> answer;
    int arr[num];
    // 만들어야할 수열 입력받기
    for(int i=0; i<num; i++) cin >> arr[i];
    
    stack<int> S;
    // stack
    for(int i=0, j=1; i<num; j++){
        // cout << arr[i] << "가 필요하고 현재는 " << j << "차례 \n";
        if(arr[i] == j){ // 필요한 수가 현재 수와 일치할 경우 넣었다가 바로 뺌
            S.push(j);
            S.pop();
            answer.push_back("+\n-\n");
            i++;
        }
        else if (arr[i] > j){ // 필요한 수가 현재 수보다 클 경우 넣어둠
            S.push(j);
            answer.push_back("+\n");
        }
        else if(arr[i] < j){ // 필요한 수가 현재 수보다 작을 경우 Stack의 Top 체크, Top에 없다면 No 출력
            if(S.top() == arr[i]) {
                S.pop();
                answer.push_back("-\n");
                j--;
                i++;
            }
            else {
                cout << "NO";
                return 0;
            }
        }
    } 

    for(int i=0; i<answer.size(); i++){
        cout << answer[i];
    }

}