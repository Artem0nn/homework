#include <iostream>
#include <math.h>
void distance(int x1, int x2, int y1, int y2)
{
    std::cout << sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

int main()
{
    int x1, x2, y1, y2;
    std::cin >> x1 >> x2 >> y1 >> y2;
    distance(x1, x2, y1, y2);
}

