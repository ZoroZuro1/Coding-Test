#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer(2);
    answer[0] = numer1 * denom2 + numer2 * denom1; 
    answer[1] = denom1*denom2;
    int temp;
    
    temp = gcd(answer[0],answer[1]);
    
    if(temp>1){
        answer[0] /= temp;
        answer[1] /= temp;
    }
    
    return answer;
}

