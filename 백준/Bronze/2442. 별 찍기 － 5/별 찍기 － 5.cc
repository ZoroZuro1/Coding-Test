#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int line;
    
    cin >> line;

    for(int i=1; i<=line; i++){
        for(int k=i; 0<line-k; k++) cout << " ";
        for(int j=0; j<i*2-1; j++) cout << "*";
        cout << "\n";
    }
}