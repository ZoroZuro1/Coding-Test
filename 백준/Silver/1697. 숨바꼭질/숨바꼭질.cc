#include <bits/stdc++.h>
using namespace std;

#define X first;
#define Y second;
int dist[100002];
int n, k;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    fill(dist, dist+100001, -1);
    dist[n] = 0; // 출발 위치
    queue<int> Q; 
    Q.push(n);

    while (dist[k] == -1)
    {
        int cur = Q.front();
        Q.pop();
        for(int next : {cur-1, cur+1, 2*cur}){ // range-based for
            if(next < 0 || next > 100000) continue;
            if(dist[next] != -1) continue;
            dist[next] = dist[cur]+1;
            Q.push(next);
        }
    }
    
    cout << dist[k];

    return 0;
}