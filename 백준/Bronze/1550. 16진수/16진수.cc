#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int answer = 0;

    for(int i=0; i<s.length(); i++){
        int temp = s.length() - i - 1;
        if(s[i] >= 'A'){
            answer += (s[i] - 'A' + 10) * pow(16, temp);
        }
        else answer += (s[i] - '0') * pow(16, temp);
    }

    cout << answer;
}