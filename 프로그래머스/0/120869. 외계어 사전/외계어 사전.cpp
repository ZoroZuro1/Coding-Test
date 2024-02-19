#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    
    for(int i=0; i<dic.size(); i++){
        if(spell.size() == dic[i].size()){
            for(int j=0; j<spell.size(); j++){
                if(dic[i].find(spell[j]) == string::npos) break;
                if(j==spell.size()-1) return 1;
            }
        }
    }
    
    return 2;
}