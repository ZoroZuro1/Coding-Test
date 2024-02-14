#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int temp;
    
    sort(array.begin(), array.end());
    answer = array[0];
    temp = abs(n - answer);
        
    for(int i=1; i<array.size(); i++){
        if(temp > abs(n - array[i])){
            answer = array[i];
            temp = abs(n - array[i]);
        }
    }
    
    return answer;
}