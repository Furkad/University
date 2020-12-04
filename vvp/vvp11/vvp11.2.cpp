#include <iostream>

int main()
{
    int A, B, C, res;

    std::cin >> A >> B >> C;
    if (A >= B && B >= C)
    {
        res = A + B;
    }
    else if (C >= B && B >= A)
    {
        res = C + B;
    }
    else
    {
        res = A + C;
    }
    std::cout << res;
}