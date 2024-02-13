#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    
    stringstream ss(s);
    vector<string> numbers;
    string number;
    
    // 스트림을 한 줄씩 읽어, 공백 단위로 분리한 뒤, 결과 배열에 저장
    while (getline(ss, number, ' ')){
        numbers.push_back(number);
    }
    
    for(int i=0; i<numbers.size(); i++){
        if(numbers[i][0] != 'Z') answer += stoi(numbers[i]);
        if(numbers[i][0] == 'Z') answer -= stoi(numbers[i-1]);
    }
    
    return answer;
}