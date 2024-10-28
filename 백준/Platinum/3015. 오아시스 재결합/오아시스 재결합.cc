#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void) {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  stack<pair<int, int>> S;  // pair<int, int> 형식을 사용하여 {높이, 동일 높이의 연속 수} 형태로 저장
  long long ans = 0;

  while (n--) {
    int h;
    cin >> h;  // 현재 사람의 키를 입력 받음
    int cnt = 1;  // 현재 키의 연속 개수를 저장할 변수 (초기값은 1)

    // 스택이 비어 있지 않고, 스택의 최상단에 있는 사람의 키가 현재 사람의 키보다 작거나 같을 때 반복
    while (!S.empty() && S.top().X <= h) {
      ans += S.top().Y;  // 스택의 최상단 사람까지는 현재 사람이 볼 수 있으므로 볼 수 있는 사람 수를 더함

      // 만약 스택의 최상단 사람과 현재 사람의 키가 같다면, 그 수만큼 cnt를 증가시킴
      if (S.top().X == h) cnt += S.top().Y;

      S.pop();  // 조건을 만족하는 스택의 최상단 사람을 제거
    }

    // 스택이 비어 있지 않다면, 현재 사람은 스택에 있는 다음 사람을 볼 수 있음
    if (!S.empty()) ans++;

    // 현재 사람의 키와 연속 개수를 스택에 추가
    S.push({h, cnt});
  }

  cout << ans;

  return 0;
}