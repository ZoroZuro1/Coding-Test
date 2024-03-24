#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
map<int, double> mapset;

bool cmp(const pair<int,double>& a, const pair<int,double>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second > b.second;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int user_num = stages.size();
    int clear_user_num = user_num;
    
    sort(stages.begin(), stages.end());
    
    // 스테이지별 실패율 구하기 
    for(int i = 1; i<=N; i++)
    {
        double failure_rate;
        int not_clear = 0;

        for(int j=0; j<user_num; j++)
        {
            if(stages[j] == i) not_clear++;
            if(stages[j] > i) break;
        }
        
        // 스테이지에 도달한 유저가 없거나 모든 유저가 성공시
        if(not_clear==0) mapset.insert({i, 0});
        else {
            failure_rate = 
                    (double)not_clear / (double)(clear_user_num);
            mapset.insert({i, failure_rate});
            clear_user_num -= not_clear;
        }
    }
    
    // 스테이지 내림차순 정리
    vector<pair<int,double>> vec(mapset.begin(), mapset.end());
    sort(vec.begin(), vec.end(), cmp);
    
    for (auto num : vec) {
		answer.push_back(num.first);
	}

    return answer;
}