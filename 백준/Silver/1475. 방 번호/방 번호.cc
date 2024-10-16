#include <bits/stdc++.h>
using namespace std;

int freq[10];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int num;
    cin >> num;

    string s = to_string(num);

    for(auto c : s) freq[c-'0']++;

    // 6, 9 처리
    for(; freq[6] > freq[9]+1 ; ){
        freq[6]--;
        freq[9]++;
    }
    for(; freq[9] > freq[6]+1 ; ){
        freq[9]--;
        freq[6]++;
    }

    cout << *max_element(freq, freq+10);
    
}