#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int arr[9];

    for(int i=0; i<9; i++) cin >> arr[i];

    int max_index = 0;

    for(int i=1; i<9; i++) if(arr[max_index] < arr[i]) max_index = i;
    
    cout << arr[max_index] << "\n" << max_index+1;
}