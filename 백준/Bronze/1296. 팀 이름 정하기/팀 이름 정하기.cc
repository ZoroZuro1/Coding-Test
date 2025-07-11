#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string name;
    string answer;
    int l=0, o=0, v=0, e=0;
    int tempL=0, tempO=0, tempV=0, tempE=0;
    int max = -1;

    cin >> name;
    
    // 연두 이름에서 각 값 구하기
    for(int i=0; i<name.length(); i++){
        switch (name[i])
        {
        case 'L':
            l++;
            break;
        case 'O':
            o++;
            break;
        case 'V':
            v++;
            break;
        case 'E':
            e++;
            break;
        default:
            break;
        }
    }

    int n;
    cin >> n;

    // 후보들에서 각 값 구하기
    for(int i=0; i<n; i++){
        tempL = l;
        tempO = o;
        tempV = v;
        tempE = e;

        string temp;
        cin >> temp;
        // 연두 이름에서 각 값 구하기
        for(int j=0; j<temp.length(); j++){
            switch (temp[j])
            {
            case 'L':
                tempL++;
                break;
            case 'O':
                tempO++;
                break;
            case 'V':
                tempV++;
                break;
            case 'E':
                tempE++;
                break;
            default:
                break;
            }
        }
        
        // 계산
        int win;
        win = ((tempL + tempO)*(tempL + tempV)*(tempL + tempE)*(tempO + tempV)*(tempO + tempE)*(tempV + tempE)) % 100;
        if(max < win){
            max = win;
            answer = temp;
        }
        else if(max == win){
            // 사전 순으로 더 앞서는 이름으로 찾기
            if (temp < answer) {
                answer = temp;
            }
        }

    }
    
    cout << answer;

}