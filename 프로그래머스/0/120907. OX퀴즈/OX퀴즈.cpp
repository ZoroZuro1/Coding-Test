#include <string>
#include <vector>
#include <sstream>
using namespace std;

bool test(const string& s)
{
    int a;
    int b;
    int c;
    char op;
    char eq;

    stringstream ss;
    ss.str(s);
    ss>>a>>op>>b>>eq>>c;

    if(op == '+')
    {
        return a + b == c;
    }
    else if(op == '-')
    {
        return a - b == c;
    }
}

vector<string> solution(vector<string> quiz) {
    
    vector<string> answer;

    for(const auto v : quiz)
    {
        if(test(v))
        {
            answer.push_back("O");
        }
        else
        {
            answer.push_back("X");
        }
    }

    return answer;
}