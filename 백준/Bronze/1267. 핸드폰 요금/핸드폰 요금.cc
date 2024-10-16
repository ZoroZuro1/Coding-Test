#include <iostream>
using namespace std;

int main(void)
{
    int num;
    int cost_y = 0;
    int cost_m = 0;

    cin >> num;

    int arr[num];

    for(int i=0; i<num; i++){
        cin >> arr[i];
    }

    // 요금 계산
    for(int i=0; i<num; i++){
        cost_y += (arr[i] / 30 + 1) * 10;
        cost_m += (arr[i] / 60 + 1) * 15;
    }

    // 비교 후 출력
    if(cost_m == cost_y) cout << "Y M " << cost_y;
    else if(cost_y > cost_m) cout << "M " << cost_m;
    else if(cost_y < cost_m) cout << "Y " << cost_y;
}