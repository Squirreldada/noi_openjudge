#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;
int main()
{
    double x, sum = 0;
    int n;
    cin >> x >> n;
    for(int i = 0; i <= n; i++)
    {
        sum += pow(x,i);
    }
    printf("%.2lf", sum);
}
