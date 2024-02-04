#include <string>
#include <vector>

using namespace std;

// 최대공약수 : 유클리드 호제법
int gcd(int a, int b)
{
	int c;
	while (b != 0)
	{
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

// 최소공배수
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}



int solution(int n) {
    int answer = 0;
    //n과 6의 최소공배수를 구한 뒤 6으로 나눔
    answer = lcm(n, 6) / 6;
    return answer;
}