#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  bool flag = true;
  
  while (true)
  {
    string num;
    cin >> num;
    flag = true;
    if(num == "0") break;
    for(int i=0; i<num.length()/2; i++){
      if(num[i] != num[num.length()-1-i]) {
        flag = false;
        break;
      }
    }
    if(flag) cout << "yes\n";
    else cout << "no\n";
  }
  
  return 0;  
}