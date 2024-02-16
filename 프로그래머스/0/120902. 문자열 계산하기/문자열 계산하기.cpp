#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    istringstream iss(my_string);
    string buffer;
    vector<string> v;

    while(getline(iss,buffer,' ')){
        v.push_back(buffer);
    }
    
    answer = stoi(v[0]);
    
    for(int i=1; i<v.size(); i+=2){
        if(v[i] == "+"){
            answer += stoi(v[i+1]);
        }
        else if(v[i] == "-"){
            answer -= stoi(v[i+1]);
        }
    }
    
    return answer;
}