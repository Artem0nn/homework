#include <iostream>
#include <math.h>
using namespace std;

int MinDivisor(int n)
{
    for (int min = 2; min <= n; min++)
        if (n % min == 0) 
        {
            return min;
            break;
        }
    return 0;
}

int main(int argc, const char* argv[]) 
{
    int n;
    cin >> n;
    if (n < 2)
    {
        cout << "ќшибка! ¬ведите значение, которое строго больше 1 ";
    }
    else 
    {
        cout << MinDivisor(n) << endl;
    }
}