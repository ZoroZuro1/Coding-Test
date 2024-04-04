#include <string>
#include <vector>
#include <iostream>
using namespace std;
int daylist[26];

int day (string s){
    double  dayNumber =0;
    dayNumber +=stoi(s.substr(0,4))*12*28;
    dayNumber += stoi(s.substr(5,2))*28;
    dayNumber += stoi(s.substr(8,2));
    return dayNumber;
}
vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    int todayNumber = day(today);

    for(int i=0;i<terms.size();i++)
    {
        daylist[terms[i][0]-'A']=todayNumber-stoi(terms[i].substr(2))*28;
    }

    for(int i=0;i<privacies.size();i++)
    {
        if(daylist[privacies[i][11]-'A']>=day(privacies[i].substr(0,10)))
            answer.push_back(i+1);
    }
    return answer;
}