#include <string>
#include <vector>

using namespace std;
int gcd(int a, int b)
{ 
	if (a % b == 0) 
    	return b;
	else 
    	return gcd(b, a % b);
}

int solution(int a, int b) {
    int temp = b/gcd(a, b);
    
    if(temp == 1)
        return 1;

    while(temp > 1){
        if(temp%2 == 0){
            temp /= 2;
        }        
        else if(temp%5 == 0){
            temp /= 5;
        }
        else
            return 2;
    }
    
    return 1;
}