#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 1;
    int temp_m = m;
    
    for(int i=1 ; i<section.size(); i++){
        if(0 < temp_m - (section[i] - section[i-1])) {
            temp_m -= section[i] - section[i-1];
        }
        else {
            answer++;
            temp_m = m;
        }
    }
    
    return answer;
}