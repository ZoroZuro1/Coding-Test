#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0, 0};
    
    for(int i=0; i<keyinput.size(); i++){
        if(keyinput[i] == "up" && board[1]/2 != answer[1]) answer[1]++;
        else if(keyinput[i] == "down" && -board[1]/2 != answer[1]) answer[1]--;
        else if(keyinput[i] == "left" && -board[0]/2 != answer[0]) answer[0]--;
        else if(keyinput[i] == "right" && board[0]/2 != answer[0]) answer[0]++;
    }
    
    
    return answer;
}