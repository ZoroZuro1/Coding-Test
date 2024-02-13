#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int num = 0;
    int max = sides[0];
    
    for(int i=1; i<sides.size(); i++){
        if(max >= sides[i]){
            num += sides[i];
        }
        else{
            num += max;
            max = sides[i];
        }
    }
    
    if(max < num) return 1;
    else return 2;
    
}