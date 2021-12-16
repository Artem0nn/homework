#include <iostream>
#include <math.h>
using namespace std;

char mas[15][15];

void f(int n) 
{
    for (int i1 = 0; i1 < n; i1++) 
    {
        for (int i2 = 0; i2 < n; i2++) 
        {
            if (i1 == i2 || i1 == n / 2 || i2 == n / 2 || i1 == n - 1 - i2) 
            {
                mas[i1][i2] = '*';
            }
            else 
            {
                mas[i1][i2] = '.';
            }
        }
    }

    for (int i1 = 0; i1 < n; i1++) 
    {
        for (int i2 = 0; i2 < n; i2++) 
        {
            cout << mas[i1][i2] << '\t';
        }
        cout << endl;
    }
}

int main() 
{
    int n;
    cin >> n;
    f(n);
}
