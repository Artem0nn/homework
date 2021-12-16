#include <iostream>
#include <math.h>
using namespace std;
int IsPointInCircle(int x, int y, int xc, int yc, int r)
{
    return pow((x - xc), 2) + pow((y - yc), 2) <= pow(r, 2);
}

int main(int argc, const char* argv[]) 
{
    int x, y, xc, yc, r;
    cin >> x >> y >> xc >> yc >> r;
    if (IsPointInCircle(x, y, xc, yc, r)) 
    
        cout << "TRUE";
    
    else 
    
        cout << "FALSE";
    
}