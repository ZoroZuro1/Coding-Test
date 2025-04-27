#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[5];

  for(int i=0; i<5; i++){
    cin >> arr[i];
  }

  // 브루트포스
  for(int i=4; i<=1000000; i++){
    int k = 0;
    for(int j=0; j<5; j++){
      if(i%arr[j]==0){
        k++;
        if(k>=3) {
          cout << i;
          return 0;
        }
      }
    }
  }
  return 0;  
}