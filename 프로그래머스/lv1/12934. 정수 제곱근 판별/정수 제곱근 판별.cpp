#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    if(sqrt(n) - static_cast<int>(sqrt(n)) != 0){
        answer = -1;
    }
    else answer = pow(sqrt(n)+1,2);
    return answer;
}