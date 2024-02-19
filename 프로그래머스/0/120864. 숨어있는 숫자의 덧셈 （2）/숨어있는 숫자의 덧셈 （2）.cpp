#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> v;
    
    for(int i=0; i<my_string.size(); i++){
        if(my_string[i]>='0' && my_string[i]<='9'){
            for(int j=1; i<my_string.size(); j++){
                if((my_string[i+j]>='a' && my_string[i+j]<='z') || (my_string[i+j]>='A' && my_string[i+j]<='Z')){
                    v.push_back(my_string.substr(i, j));
                    i += j;
                    break;
                }
            }
        }
    }
    
    for(int i=0; i<v.size();i++){
        answer += stoi(v[i]);
    }
    
    
    return answer;
}