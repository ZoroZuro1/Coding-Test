#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
    int arr[4];
    int num0;
    char answer[3];

    for(int i=0; i<3; i++){
        num0 = 0;
        for(int j=0; j<4; j++){
            cin >> arr[i];
            if(arr[i] == 0) num0++;
        }
        switch (num0)
        {
        case 0:
            answer[i] = 'E';
            break;
        case 1:
            answer[i] = 'A';
            break;
        case 2:
            answer[i] = 'B';
            break;
        case 3:
            answer[i] = 'C';
            break;
        case 4:
            answer[i] = 'D';
            break;
        default:
            break;
        }
        
    }
    
    for(int i=0; i<3; i++){
        cout << answer[i] << "\n";
    }
}