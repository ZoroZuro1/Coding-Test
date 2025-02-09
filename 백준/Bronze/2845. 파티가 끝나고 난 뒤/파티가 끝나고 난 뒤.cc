#include <iostream>
using namespace std;

int main(void) 
{
    int n = 0;
    int roomN = 0;

    cin >> n >> roomN;
    int expectNum = n * roomN;

    for(int i=0; i<5; i++){
        int temp;
        cin >> temp;
        cout << temp - expectNum << " ";
    }

    return 0;
}
