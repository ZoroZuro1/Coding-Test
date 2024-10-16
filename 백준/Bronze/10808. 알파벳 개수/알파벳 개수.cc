#include <bits/stdc++.h>
using namespace std;

int freq[26];

int main(void) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  
  string s;
  cin >> s;

  for(auto c : s) freq[c-'a']++;
    for (int i=0; i<26; i++) cout << freq[i] << " ";
}