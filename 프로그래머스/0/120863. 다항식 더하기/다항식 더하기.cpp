#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    vector<int> temp = {0, 0};
    vector<string> str;
    istringstream iss(polynomial);
    string buffer;
    
    while (getline(iss, buffer, ' ')) {
    	  str.push_back(buffer);
    }
    
    for(int i=0; i<str.size(); i++){
        if(str[i][0] == '+') continue;
        else if(str[i].at(str[i].size()-1) != 'x') {
            temp[1] += stoi(str[i]);
        }
        else {
            str[i].pop_back();
            if(str[i] == "") temp[0]++;
            else temp[0] += stoi(str[i]);
        }
        
    }
    
    if(temp[0] > 1) answer += to_string(temp[0]);
    if(temp[0] != 0) answer += "x";
    if(temp[0] != 0 && temp[1] != 0) answer += " + ";
    if(temp[1] != 0) answer += to_string(temp[1]);
    
    return answer;
}