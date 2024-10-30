#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    bool errorflag = false; 
    bool flipflag = false;

    int testcase;
    cin >> testcase;

    for(int i=0; i<testcase; i++){
        errorflag = false;
        flipflag = false;

        string command;
        cin >> command;
        
        int length;
        cin >> length;

        string st_arr;
        cin >> st_arr;

        st_arr.pop_back();
        
        istringstream ss(st_arr.substr(1));
        string subs;

        deque<int> DQ;
        while (getline(ss, subs, ','))
        {
            DQ.push_back(stoi(subs));
        }

        for(int j=0; j < (int)command.size(); j++){
            if(command[j] == 'R'){ // 뒤집기
                if(!DQ.empty()){
                    flipflag = !flipflag;
                }
            }
            else { // 삭제하기
                if(!DQ.empty()){
                    if(!flipflag) DQ.pop_front();
                    else DQ.pop_back();
                }
                else {
                    errorflag = true;
                    break;
                }
            }
        }

        // 출력하기
        if(errorflag) cout << "error\n";
        else {
            cout << "[";
            while (!DQ.empty())
            {
                if(!flipflag){
                    cout << DQ.front();
                    DQ.pop_front();
                }
                else {
                    cout << DQ.back();
                    DQ.pop_back();
                }
                if(!DQ.empty()) cout << ",";
            }
            cout << "]\n";
        }
    }    

    return 0;
}