#include <string>
#include <vector>

using namespace std;

vector<vector<int>> checklm(vector<vector<int>> board_dan, int x, int y);

int solution(vector<vector<int>> board) {
    int answer = 0;
    vector<vector<int>> board_dan = board;
    
    for(int x=0; x<board.size(); x++){
        for(int y=0; y<board[x].size();y++){
            if(board[x][y] == 1)
                board_dan = checklm(board_dan, x, y);
        }
    }
    
    for(int x=0; x<board_dan.size(); x++){
        for(int y=0; y<board_dan[x].size();y++){
            if(board_dan[x][y] == 0)
                answer++;
        }
    }
    
    return answer;
}

vector<vector<int>> checklm(vector<vector<int>> board, int x, int y){
    vector<vector<int>> board_dan = board;
    if(x-1 >= 0) {
        if(board[x-1][y] == 0) board_dan[x-1][y] = 2;
        if(y-1 >= 0) if(board[x-1][y-1] == 0) board_dan[x-1][y-1] = 2;
        if(y+1 < board[x].size()) if(board[x-1][y+1] == 0) board_dan[x-1][y+1] = 2;
    }
    if(x+1 < board.size()) {
        if(board[x+1][y] == 0) board_dan[x+1][y] = 2;
        if(y-1 >= 0) if(board[x+1][y-1] == 0) board_dan[x+1][y-1] = 2;
        if(y+1 < board[x].size()) if(board[x+1][y+1] == 0) board_dan[x+1][y+1] = 2;
    }
    if(y-1 >= 0) if(board[x][y-1] == 0) board_dan[x][y-1] = 2;
    if(y+1 < board[x].size()) if(board[x][y+1] == 0) board_dan[x][y+1] = 2;    
    return board_dan;
}