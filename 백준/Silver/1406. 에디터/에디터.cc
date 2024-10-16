#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    list<char> Input;
    string text;
    
    // list에 할당
    cin >> text;
    for(int i=0; i<text.length(); i++) Input.push_back(text[i]);
    list<char>::iterator t = Input.end();
    
    // 명령어 개수 받기
    int cnum; 
    cin >> cnum;

    // 명령어 수행
    char command;
    char c;

    for(int i=0; i<cnum; i++){
        cin >> command;
        if(command == 'L'){
            if(t != Input.begin()) t--;
        }
        else if(command == 'D'){
            if(t != Input.end()) t++;
        }
        else if(command == 'B'){
            if(t != Input.begin()){
                t--;
                t = Input.erase(t); 
            }
        }
        else if(command == 'P'){
            cin >> c;
            Input.insert(t, c);
        }
    }

    // 출력
    for(t = Input.begin(); t != Input.end(); t++){
        cout << *t;
    }
}