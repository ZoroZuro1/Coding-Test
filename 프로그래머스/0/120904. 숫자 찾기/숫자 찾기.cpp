#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    string num_s;
    
    num_s = to_string(num);
    for(int i=0; i<num_s.size(); i++){
        if(num_s[i] == k +'0') return i+1;
    }
    return -1;
}