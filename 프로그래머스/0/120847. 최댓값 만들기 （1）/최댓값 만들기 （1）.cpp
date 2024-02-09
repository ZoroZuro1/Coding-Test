#include <string>
#include <vector>

using namespace std;

int findMaxNumIndex(vector<int> numbers){
    int temp = 0;
    for(int i=1; i < numbers.size() ; i++){
        if(numbers[temp] < numbers[i])
            temp = i;
    }
    return temp;
}

int solution(vector<int> numbers) {
    int answer = 0;
    int num1;
    int num2;
    
    answer = numbers[findMaxNumIndex(numbers)];
    numbers[findMaxNumIndex(numbers)] = -1;
    answer *= numbers[findMaxNumIndex(numbers)];
    return answer;
}