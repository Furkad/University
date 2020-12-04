#include <iostream>
#include <math.h>

void main()
{
    int xA, yA, xB, yB, xC, yC;
    float dB, dC;

    std::cin >> xA >> yA >> xB >> yB >> xC >> yC;

    dB = sqrt(pow((xB - xA), 2) + pow((yB - yA), 2));
    dC = sqrt(pow((xC - xA), 2) + pow((yC - yA), 2));

    if (dC < dB)
    {
        std::cout << xC << " " << yC << " " << dC;
    }
    else
    {
        std::cout << xB << " " << yB << " " << dB;
    }
}