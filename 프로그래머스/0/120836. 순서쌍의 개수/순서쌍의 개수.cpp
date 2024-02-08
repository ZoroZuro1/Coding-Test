#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    for(int i = n/2; i > 0 ; i--){
        if(n%i == 0){
            answer++;
        }
    }
    return answer;
}