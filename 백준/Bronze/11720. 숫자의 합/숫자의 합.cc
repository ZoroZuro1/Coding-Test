#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, ans = 0;
    string s;
    cin >> n;
    cin >> s;

    for(int i=0; i<n; i++){
        ans += s[i] - '0';
    }

    cout << ans;
}