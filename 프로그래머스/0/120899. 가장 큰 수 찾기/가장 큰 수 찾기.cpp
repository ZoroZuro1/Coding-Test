#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer = {array[0], 0};
    
    for(int i=1; i<array.size(); i++){
        if(array[i-1] < array[i]){
            answer = {array[i], i};
        }
    }
    
    return answer;
}