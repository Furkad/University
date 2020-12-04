#include <iostream>

int main()
{
    int A, B;

    std::cin >> A >> B;
    if (A > B)
    {
        B = A;
    }
    else if (B > A)
    {
        A = B;
    }
    else
    {
        A = 0;
        B = 0;
    }
    std::cout << A << " " << B;
}