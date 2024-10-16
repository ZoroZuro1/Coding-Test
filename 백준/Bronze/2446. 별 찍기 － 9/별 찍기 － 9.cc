#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int line;
    
    cin >> line;

    for(int i=1; i<=line; i++){
        for(int k=0; k<i-1; k++) cout << " ";
        for(int j=0; j<2*(line-i)+1; j++) cout << "*";
        cout << "\n";
    }
    for(int i=1; i<line; i++){
        for(int k=i+1; 0<line-k; k++) cout << " ";
        for(int j=0; j<2*i+1; j++) cout << "*";
        cout << "\n";
    }
}