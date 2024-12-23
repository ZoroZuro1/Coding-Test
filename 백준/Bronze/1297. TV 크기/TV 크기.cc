#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int d, h, w;
    cin >> d >> h >> w;

    int rh, rw = 0;
    float a = 0;
    a = d / sqrt(h*h + w*w);    
    rh = a * h;
    rw = a * w;

    cout << rh << " " << rw;
}