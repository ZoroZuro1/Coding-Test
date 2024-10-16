#include <bits/stdc++.h>
using namespace std;

int freq[2000000];

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int answer = 0;

    int size;
    cin >> size;

    int arr[size];
    for(int i=0; i<size; i++) cin >> arr[i];

    int sum;
    cin >> sum;

    for (int i=0; i<size; i++){
        if(sum-arr[i]>=0){
            if(freq[sum-arr[i]] > 0) {
            answer += freq[sum-arr[i]];
            }
            freq[arr[i]]++;
        }
    }

    cout << answer;
}