#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer((my_str.size()+n-1)/n, "");

    for(int i=0; i<answer.size(); i++){
        answer[i] = my_str.substr(i*n, n);
    }
    
    return answer;
}