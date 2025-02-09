#include <bits/stdc++.h>
using namespace std;

int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    bool flag = true;

    for(int i=0; i<str.length()/2; i++){
        if(str[i] != str[str.length()-i-1]){
            cout << 0;
            flag = false;
            break;
        }
    }
    
    if(flag) cout << 1;

    return 0;
}