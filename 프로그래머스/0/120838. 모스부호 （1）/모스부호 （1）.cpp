#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> split(string str, char delimiter);

string solution(string letter) {
    string answer = "";
    vector<string> letterSplit = split(letter, ' ');
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."} ;
    
    
    for(int i=0; i<letterSplit.size() ; i++){
        for(int j=0; j<morse.size() ; j++){
            if(letterSplit[i] == morse[j])  answer.push_back(j+'a');
        }
    }
    
    return answer;
}

vector<string> split(string input, char delimiter){
    vector<string> answer;
    stringstream ss(input);
    string temp;
    
    while (getline(ss, temp, delimiter)){
        answer.push_back(temp);
    }
    
    return answer;
}