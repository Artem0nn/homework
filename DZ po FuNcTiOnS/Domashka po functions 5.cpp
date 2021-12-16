#include <iostream>
#include <math.h>
using namespace std;

void IsPrime(int n) {
    for (int del = 2; del <= n; del++)
        if ((n % del == 0) && (del == n))
        {
            cout << "YES ";
            break;
        }
        else if (n % del == 0) 
        {
            cout << "NO ";
            break;
        }
}
int main() 
{
    int n;
    cin >> n;
    IsPrime(n);
}
