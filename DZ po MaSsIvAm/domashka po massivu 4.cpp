#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int mas[100][100];
    int n;
    cin >> n;
    for (int i1 = 0; i1 < n; i1++) 
    {
        for (int i2 = 0; i2 < n; i2++) 
        {
            mas[i1][i2] = abs(i1 - i2);
            cout << mas[i1][i2] << " ";
        }
        cout << endl;
    }
}