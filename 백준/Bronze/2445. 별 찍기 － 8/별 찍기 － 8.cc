#include <iostream>
using namespace std;

int main(void)
{
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int line;
    
    cin >> line;

    for(int i=1; i<line; i++){
        for(int j=0; j<i; j++) cout << "*";
        for(int k=0; k<(line-i)*2; k++) cout << " ";
        for(int j=0; j<i; j++) cout << "*";
        cout << "\n";
    }

    for(int i=0; i<line*2; i++) cout << "*";
    cout << "\n";

    for(int i=1; i<line; i++){
        for(int j=0; j<line-i; j++) cout << "*";
        for(int k=0; k<i*2; k++) cout << " ";
        for(int j=0; j<line-i; j++) cout << "*";
        cout << "\n";
    }
}