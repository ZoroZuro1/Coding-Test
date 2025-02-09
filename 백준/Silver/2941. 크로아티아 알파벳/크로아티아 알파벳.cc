#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin >> input;
    
    int answer = input.length();

    for(int i=0; i<input.length()-1; i++){
        if(input[i] == 'c'){
            if(input[i+1] == '=' || input[i+1] == '-') { answer--; i++; }
        }
        if(input[i] == 'd'){
            if(input[i+1] == 'z' && i+2 < input.length() && input[i+2] == '=') { answer-=2; i+=2; }
            if(input[i+1] == '-') { answer--; i++; }
        }
        if(input[i] == 'l' && input[i+1] == 'j') { answer--; i++; }
        if(input[i] == 'n' && input[i+1] == 'j') { answer--; i++; }
        if(input[i] == 's' && input[i+1] == '=') { answer--; i++; }
        if(input[i] == 'z' && input[i+1] == '=') { answer--; i++; }
    }

    cout << answer;

    return 0;
}
