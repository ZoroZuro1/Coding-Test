#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int sum = 0;
    int arr_length = arr.size();
    for(int i=0; i<arr_length; i++)
    {
        sum += arr[i];
    }
    answer = (double)sum / (double)arr_length;
    return answer;
}