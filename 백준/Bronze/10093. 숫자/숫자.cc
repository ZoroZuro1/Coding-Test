#include <iostream>
using namespace std;

int main(void)
{
    long long big, small, temp;
    cin >> big >> small;
    
    // 정렬
    if(big<small){
        temp = big;
        big = small;
        small = temp;
    }
    if(big - small <= 1) { // 사이에 숫자가 없는 경우
        cout << 0 << "\n";
    }
    else{
        cout << big-small-1 << "\n";

        for(long long i = small+1 ; i < big ; i++){
            cout << i << " ";
        } 
    }
    
}