#include <iostream>
#include <math.h>
using namespace std;

int mas[10000];

int f(int n) 
{
    if (mas[n] == 0) 
    {
        if (n == 1 || n == 0)
        {
            mas[n] = 1;
        }
        else 
        {
            mas[n] = f(n - 1) + f(n - 2);
        }
    }
    return mas[n];
}

int main()
{
    int n;
    cin >> n;
    cout << f(n) << endl;
}