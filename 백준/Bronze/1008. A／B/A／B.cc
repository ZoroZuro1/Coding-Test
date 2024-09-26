#include <iostream>

int main()
{
    int a;
    int b;
    double answer;

    std::cin >> a >> b;
    answer = (double)a / b;
    std::cout.precision(10);
    std::cout << answer;

    return 0;
}