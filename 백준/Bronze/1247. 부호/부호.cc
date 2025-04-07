#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long arr[100000];

    for(int i=0; i<3; i++){
        int n;
        cin >> n;

        long long sum = 0, flow = 0; 
        for(int j=0; j<n; j++){
            long long tmp;
            long long prev;
            cin >> tmp;
            prev = sum; 
            sum += tmp;
            if (tmp > 0 && prev > 0 && sum < 0) flow++;
			if (tmp < 0 && prev < 0 && sum > 0) flow--;
        }
        if(flow == 0){
            if(sum < 0) cout << "-\n";
            if(sum == 0) cout << "0\n";
            if(sum > 0) cout << "+\n";
        }
        else {
            if(flow > 0) cout << "+\n";
            if(flow < 0) cout << "-\n";
        }
    }
    
    return 0;
}