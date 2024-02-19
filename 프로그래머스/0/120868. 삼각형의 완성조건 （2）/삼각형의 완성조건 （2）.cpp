#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int max = 0;
    int a = 0;
    
    if(sides[0] > sides[1]){
        max = sides[0];
        a = sides[1];
    }
    else {
        max = sides[1];
        a = sides[0];
    }
    
    for(int i=1 ; i<max; i++){
        if(a + i > max)
            answer++;
    }
    
    for(int i=max ; i<max+a; i++){
        if(a + max > i)
            answer++;
    }
    
    
    return answer;
}