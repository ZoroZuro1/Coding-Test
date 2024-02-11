#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    string vowels = "aeiou";
    bool isVowels = false;
    
    for(int i=0; i<my_string.size(); i++){
        for(int j=0; j<vowels.size(); j++){
            if(my_string[i] == vowels[j]) isVowels = true;
        }
        if(!isVowels) answer.push_back(my_string[i]);
        isVowels = false;
    }
    
    return answer;
}