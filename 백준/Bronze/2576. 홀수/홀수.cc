#include <iostream>
using namespace std;

int main(void)
{
    int arr[7];
    int min = 100; // 주어진 자연수의 최대값
    int sum = 0;

    for(int i=0; i<7; i++){
        cin >> arr[i];
        if(arr[i]%2 == 1){ // 홀수인 경우
            sum += arr[i];
            if(arr[i] < min) min = arr[i];
        } 
    }
    if(sum == 0) cout << -1;
    else cout << sum << "\n" << min;
}