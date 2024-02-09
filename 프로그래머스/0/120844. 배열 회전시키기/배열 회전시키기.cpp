#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer = numbers;
    int temp = 0;;
    
    if(direction == "left"){
        temp = answer[0];
        answer.erase(answer.begin());
        answer.push_back(temp);
    }
    if(direction == "right"){
        temp = answer[answer.size()-1];
        answer.pop_back();
        answer.insert(answer.begin(), temp);
    }
    
    return answer;
}