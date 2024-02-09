#include <string>
#include <vector>

using namespace std;
int maxNum(int size, int n){
    int i;
    for(i=1; i*n<=size;){
        i++;
    }
    return i-1;
}

int solution(vector<int> box, int n) {
    int answer = 0;
    answer = maxNum(box[0], n) * maxNum(box[1], n) * maxNum(box[2], n);
    return answer;
}