#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    stack<char> small;
    stack<char> big;

    int answer = 0;
    bool errorflag = false;

    string str;
    getline(cin, str);

    for(int i=0; i<(int)str.size(); i++){
        if(str[i] == '('){
            small.push(str[i]);
        }
        else if(str[i] == ')'){
            if(small.empty()) {
                errorflag = true;
                break;
            }
            else{
                small.pop();
                if(i != 0 && str[i-1] == '('){
                    if(!small.empty() && !big.empty()) answer += pow(2, small.size()+1)*pow(3, big.size());
                    else if(!small.empty()) answer += pow(2, small.size()+1);
                    else if(!big.empty()) answer += 2*pow(3, big.size());
                    else answer += 2;
                }
                // cout << "현재 answer: " << answer << "\n";
            }
        }
        else if(str[i] == '['){
            big.push(str[i]);
        }
        else if(str[i] == ']'){
            if(big.empty()) {
                errorflag = true;
                break;
            }
            else{
                big.pop();
                if(i != 0 && str[i-1] == '['){
                    if(!small.empty() && !big.empty()) answer += pow(2, small.size())*pow(3, big.size()+1);
                    else if(!small.empty()) answer += 3*pow(2, small.size());
                    else if(!big.empty()) answer += pow(3, big.size()+1);
                    else answer += 3;
                }
                // cout << "현재 answer: " << answer << "\n";
            }
        }
    }

    if(errorflag || !small.empty() || !big.empty()) cout << 0; 
    else cout << answer;

    return 0;
}