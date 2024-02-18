#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> max = dots[0];
    vector<int> min = dots[0];
    
    for(int i=1; i<dots.size(); i++){
        if(max[0] < dots[i][0] || max[1] < dots[i][1])
            max = dots[i];
        if(min[0] > dots[i][0] || min[1] > dots[i][1])
            min = dots[i];
    }
    
    answer = (max[0]-min[0])*(max[1]-min[1]);
    
    
    return answer;
}