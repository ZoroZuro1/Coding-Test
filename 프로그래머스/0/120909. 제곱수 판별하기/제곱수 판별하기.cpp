#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    if(sqrt((double)n) - (int)sqrt((double)n) == 0) return 1;
    else return 2;
}