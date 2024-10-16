#include <bits/stdc++.h>
using namespace std;

int freq[10];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c;
    cin >> a >> b >> c;

    long long answer = a*b*c;

    string s = to_string(answer);

    for(auto c : s) freq[c-'0']++;
    for (int i=0; i<10; i++) cout << freq[i] << "\n";
}