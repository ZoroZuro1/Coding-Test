#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> p = {0, 0};
    
    sort(numbers.begin(), numbers.end());
    p[0] = numbers[0]*numbers[1];
    p[1] = numbers[numbers.size()-1]*numbers[numbers.size()-2];
    
    answer = p[0] > p[1] ? p[0] : p[1];
    
    return answer;
}