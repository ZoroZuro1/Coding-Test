#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 1;
    
    for(int i=1; i<k; i++){
        if(answer + 1 > numbers.size()) answer = 2;
        else if(answer + 2 >  numbers.size()) answer = 1;  
        else answer += 2;
    }
    
    return answer;
}