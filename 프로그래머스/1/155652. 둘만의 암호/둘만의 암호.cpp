#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = s;
    bool isInSkip;
    
    // s 문자열의 문자 하나씩 처리
    for(int i=0; i<s.size(); i++)
    {
        for(int j=0; j<index;)
        {
            isInSkip = false;
            
            if(answer[i] == 'z') answer[i] = 'a';
            else answer[i] += 1;
            
            for(int k=0; k<skip.size(); k++)
            {
                // skip에 존재하면 건너뛰기
                if(answer[i] == skip[k]) 
                {
                    isInSkip = true;
                    break;
                }
            }
            
            if(isInSkip) continue;
            else j++;
        }
    }
    
    return answer;
}