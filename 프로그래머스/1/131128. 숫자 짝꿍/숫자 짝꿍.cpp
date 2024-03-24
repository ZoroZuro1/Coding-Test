#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int x_count[10]={0};
    int y_count[10]={0};
    int tmp;
    
    for (int i = 0; i < X.size(); i++)
    {
        tmp = X[i]-'0';
        x_count[ X[i]-'0' ]++;
    }
    
    for (int i = 0; i < Y.size(); i++)
    {
        tmp = Y[i]-'0';
        y_count[tmp]++;
    }
    
    for(int i = 9; i >=0;i--)
    {
        int n = min( x_count[i], y_count[i]);
        for(int j=0; j<n; j++)
            answer+=to_string(i);
    }
    
    if ( answer == "")
        answer = "-1";
    else if (answer[0]=='0')
        answer = "0";

    return answer;
}