#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    vector<int> a;
    
    int j = 0;
    
    for(int i=0; i<num_list.size()/n ; i++){
        answer.push_back(a);
        for(; j<n+i*n ; j++){
            answer[i].push_back(num_list[j]);
        }
    }
    
    
    return answer;
}