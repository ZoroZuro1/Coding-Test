#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    const int N = 3;
    string a, b;
    int temp = 0;
    int answer = 0;
    
    getline(cin, a);
    getline(cin, b);

    for(int i=N-1; i>=0 ; i--)
    {
        temp = 0;
        for(int j=N-1; j>=0 ; j--)
        {
            temp += (int)(a[j]-'0') * (int)(b[i]-'0')  * (int)pow(10, N-j-1) * (int)pow(10, N-i-1);
        }
        cout << temp / (int)pow(10, N-i-1) << endl;
        answer += temp;
    }
    cout << answer;

    return 0;
}