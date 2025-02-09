#include <bits/stdc++.h>
using namespace std;

int alpha[27];
int main(void) 
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin >> str;
    bool flag = false;

    for(int i=0; i<str.length(); i++){
        if(str[i] >= 'a') alpha[str[i] - 'a']++;
        else alpha[str[i] - 'A']++;
    }
    int maxA = alpha[0];
    int maxI = 0;
    for(int i=1; i<27; i++){
        if(maxA <= alpha[i]){
            if(maxA == alpha[i]){
                flag = true;
            }
            else flag = false;
            maxA = alpha[i];
            maxI = i;
        }
    }

    if(flag) cout << "?";
    else {
        cout << (char)(maxI + 'A');
    }

    return 0;
}
