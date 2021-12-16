#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    int n, a, m, b, change;
    cin >> n >> m;
    int mas[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mas[i][j];
    cin >> a >> b;
    for (int i = 0; i < n; ++i) 
    {
        change = mas[i][a];
        mas[i][a] = mas[i][b];
        mas[i][b] = change;

    }
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << mas[i][j] << " ";
        }
        cout << endl;
    }
}
