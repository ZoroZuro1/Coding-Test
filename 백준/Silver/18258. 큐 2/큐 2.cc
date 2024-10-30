#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> Q;
    int num; 

    cin >> num;

    for(int i=0; i<num; i++){
        string command;
        cin >> command;
        
        if(command == "push"){
            int x;
            cin >> x;
            Q.push(x);
        }
        else if(command == "pop"){
            if(!Q.empty()){
                cout << Q.front() << "\n";
                Q.pop();
            }
            else cout << -1 << "\n";
        }
        else if(command == "size"){
            cout << Q.size() << "\n";
        }
        else if(command == "empty"){
            if(Q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        }
        else if(command == "front"){
            if(!Q.empty()) cout << Q.front() << "\n";
            else cout << -1 << "\n";
        }
        else if(command == "back"){
            if(!Q.empty()) cout << Q.back() << "\n";
            else cout << -1 << "\n";
        }
    }    

    return 0;
}