#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int ind = 2;
    
    while(n > 1)
    {
        if(n % ind == 0)
        {
            answer.emplace_back(ind);
            while(n %ind ==0)
            {
                n/=ind;
            }
        }
        ind++;
    }
    
    return answer;
}