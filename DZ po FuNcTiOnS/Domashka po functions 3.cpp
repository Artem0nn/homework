#include <iostream>
#include <math.h>
using namespace std;
int power(int a, int n) 
{
    int total = 0;
    if (n == 0) 
    {
        total = 1;
    }
    else if (n == 1) 
    {
        total = a;
    }
    else if (n % 2 == 0) 
    {
        total = power(a * a, n / 2);
    }
    else 
    {
        total = a * power(a * a, n / 2);
    }
    return total;
}

int main(int argc, const char* argv[]) 
{
    int a, n;
    cin >> a >> n;
    cout << power(a, n) << endl;
}
