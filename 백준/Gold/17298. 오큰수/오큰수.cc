#include <bits/stdc++.h>
using namespace std;

stack<int> input_s;
stack<int> output_s;

int main(void) {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N = 0;
    int num = 0;
    vector<int> nge;

    // 입력
    cin >> N;
    for(int i=0; i<N; i++){
        cin >> num;
        input_s.push(num);
    } 

    while(!input_s.empty()){

        while(!output_s.empty() && output_s.top() <= input_s.top()){
            output_s.pop();
        }

        if(output_s.empty()){
                nge.push_back(-1);
        }
        else {
            nge.push_back(output_s.top());
        }
        output_s.push(input_s.top());
        input_s.pop();
    }

    for(int i=nge.size(); i>0 ; i--){
        cout << nge[i-1] << " ";
    }

    return 0;
}