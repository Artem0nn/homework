#include <iostream>
#include <math.h>
using namespace std;

int sum(int n, int* total) 
{
    *total += n;
    return 0;
}
int main()
{
    int n;
    int total = 0;
a:
    cin >> n;
    sum(n, &total);
    if (n == 0)
    {
        cout << total;
    }
    else 
    {
        goto a;
    }
}
