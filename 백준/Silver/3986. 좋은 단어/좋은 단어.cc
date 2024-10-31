#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int answer = 0;

    int N;
    cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        string str;
        getline(cin, str);

        stack<char> S;

        for(int j=0; j<(int)str.size(); j++){
            if(str[j] == 'A'){
                if(!S.empty() && S.top() == 'A') S.pop();
                else S.push(str[j]);
            }
            else if(str[j] == 'B'){
                if(!S.empty() && S.top() == 'B') S.pop();
                else S.push(str[j]);
            }
        }

        if(S.empty()) answer++;
    }

    cout << answer;

    return 0;
}