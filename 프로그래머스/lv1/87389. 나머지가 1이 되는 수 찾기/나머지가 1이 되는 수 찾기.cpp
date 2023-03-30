#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int i = 0;
    for(i=2; i<n ; i++)
    {
        if(n % i == 1)
            return i;
    }
    return i;
}