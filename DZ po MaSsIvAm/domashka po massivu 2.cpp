#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int mas[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> mas[i][j];
    int max = mas[0][0];
    int maxi = 0;
    int maxj = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (mas[i][j] > max) 
            {
                max = mas[i][j];
                maxi = i;
                maxj = j;
            }
    cout << maxi << endl;
    cout << maxj << endl;

}
