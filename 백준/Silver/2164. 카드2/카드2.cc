#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    queue<int> Q;
    int num; 

    cin >> num;

    for(int i=1; i<=num; i++){
        Q.push(i);
    }

    while(Q.size() > 1){
        //cout << Q.front() << "버림\n";
        Q.pop();
        
        if(Q.size() > 1){
            int card = Q.front();
            Q.pop();
            Q.push(card);
            //cout << card << "뒤로 옮김\n";
        }
    }  

    cout << Q.front();

    return 0;
}