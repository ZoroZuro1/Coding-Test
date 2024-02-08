#include <string>
#include <vector>

using namespace std;

__int128 factorial(int num){
    if (num <= 1) return 1;
    return num * factorial(num - 1);
}

__int128 solution(int balls, int share) {
    __int128 answer = factorial(balls) / (factorial(balls-share)*factorial(share));
    return answer;
}