#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
  if(b==0) return a;
  return gcd(b, a%b);
}

int lcm(int a, int b){
  return a/gcd(a,b) * b;
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int arr[5];
  for(int i=0; i<5; i++){
    cin >> arr[i];
  }

  int ans = 1000000;

  for(int i=0; i<5; i++){
    for(int j=i+1; j<5; j++){
      for(int k=j+1; k<5; k++){
        int temp = lcm(arr[i], arr[j]);
        temp = lcm(temp, arr[k]);
        ans = min(ans, temp);
      }
    }
  }

  cout << ans;

  return 0;  
}