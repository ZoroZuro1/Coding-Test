#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    stack<int> S;

    int commandN;
    cin >> commandN;

    string commandS;
    int value;

    for(int i=0; i<commandN; i++){
        cin >> commandS;
        if(commandS == "push"){
            cin >> value;
            S.push(value);
        }
        else if(commandS == "pop"){
            if(S.empty()) cout << -1 << "\n";
            else {
                int temp = S.top();
                S.pop();
                cout << temp << "\n";
            }
        }
        else if(commandS == "size"){
            cout << S.size() << "\n";
        }
        else if(commandS == "empty"){
            if(S.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(commandS == "top"){
            if(S.empty()) cout << -1 << "\n";
            else cout << S.top() << "\n";
        }
    }
}