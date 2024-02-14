#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string temp = "";
    
    for(int i=0; i<numbers.size();i++){
        if(numbers[i] == 'o'){
            temp.push_back('1');
            i += 2;
        }
        else if(numbers[i] == 't' && numbers[i+1] == 'w'){
            temp.push_back('2');
            i += 2;
        }
        else if(numbers[i] == 't' && numbers[i+1] == 'h'){
            temp.push_back('3');
            i += 4;
        }
        else if(numbers[i] == 'f' && numbers[i+1] == 'o'){
            temp.push_back('4');
            i += 3;
        }
        else if(numbers[i] == 'f' && numbers[i+1] == 'i'){
            temp.push_back('5');
            i += 3;
        }
        else if(numbers[i] == 's' && numbers[i+1] == 'i'){
            temp.push_back('6');
            i += 2;
        }
        else if(numbers[i] == 's' && numbers[i+1] == 'e'){
            temp.push_back('7');
            i += 4;
        }
        else if(numbers[i] == 'e'){
            temp.push_back('8');
            i += 4;
        }
        
        else if(numbers[i] == 'n'){
            temp.push_back('9');
            i += 3;
        }
        
        else if(numbers[i] == 'z'){
            temp.push_back('0');
            i += 3;
        }
    }
    
    answer = stoll(temp);
    
    return answer;
}