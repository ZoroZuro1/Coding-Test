#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

stack<pair<int, int>> tower;
int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int num;
    cin >> num;

    tower.push({100000001, 0});
    for(int i=1; i<=num; i++){
        int h;
        cin >> h;
        while (tower.top().X < h)
        {
            tower.pop();
        }
        cout << tower.top().Y << " ";
        tower.push({h, i});
    }
}