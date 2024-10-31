#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool errorflag = false;

    int N;
    cin >> N;
    cin.ignore();

    for(int i=0; i<N; i++){
        stack<char> S;
        string line;

        getline(cin, line);
        for(int j=0; j<(int)line.size(); j++){
            if(line[j] == '(') S.push('(');
            else if(!S.empty()) S.pop();
            else {
                errorflag = true;
                break;
            }
        }
        if(S.empty() && !errorflag) cout << "YES\n";
        else cout << "NO\n";
        errorflag = false;
    }

    return 0;
}