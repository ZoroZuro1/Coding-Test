#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int answer = 0;

    int size;
    cin >> size;

    int arr[size];
    for(int i=0; i<size; i++) cin >> arr[i];

    int num;
    cin >> num;

    for (int i=0; i<size; i++){
        if(arr[i] == num) answer++;
    }

    cout << answer;
}