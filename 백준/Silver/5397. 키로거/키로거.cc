#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int testcase_num;
    string input;
    list<char> L;
    list<char>::iterator t = L.begin();

    cin >> testcase_num;

    for(int i=0; i<testcase_num; i++){
        cin >> input;
        
        L.clear();
        t = L.begin();

        for(int j=0; j<input.length(); j++){
            if(input[j] == '<'){
                if(t != L.begin()) t--;
            }
            else if(input[j] == '>'){
                if(t != L.end()) t++;
            }
            else if(input[j] == '-'){
                if(t != L.begin()){
                    t--;
                    t = L.erase(t);
                }
            }
            else {
                L.insert(t, input[j]);
            }
        }

        for(t=L.begin(); t != L.end(); t++) cout << *t;
        cout << "\n";
    }
}