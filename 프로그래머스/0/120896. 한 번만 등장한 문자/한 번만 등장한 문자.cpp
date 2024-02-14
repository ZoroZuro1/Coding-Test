#include <string>
#include <vector>
#include <map>

using namespace std;

map<char, int> mp;

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.size(); i++)
        mp[s[i]]++;
    
    for(auto it : mp)
    	if(it.second==1) answer+=it.first;
    
    return answer;
}