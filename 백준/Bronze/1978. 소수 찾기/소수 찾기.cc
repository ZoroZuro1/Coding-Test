#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    bool flag;
    int answer = 0;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        int temp; 
        cin >> temp;
        if(temp > 1){
            flag = true;
            for(int j=2; j<=sqrt(temp); j++){
                if(temp % j == 0){
                    flag = false;
                    break;
                }
            }
            if(flag) answer++;
        }
    }
    cout << answer;
}