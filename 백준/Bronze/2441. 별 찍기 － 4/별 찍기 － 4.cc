#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int line;
    
    cin >> line;

    for(int i=line; i>=0; i--){
        for(int k=i; 0<line-k; k++) cout << " ";
        for(int j=0; j<i; j++) cout << "*";
        cout << "\n";
    }
}