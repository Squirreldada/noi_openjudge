#include <iostream>
#include <cstdio>
double jc(double a)
{
    double sum = 1.0;
    for(int i = 1; i <= a; i++)
    {
        sum *= i;
    }
    return sum;
}
int main()
{
    //int n;
    double n, sum = 1.0;
    std::cin >> n;
    for(int i = 1; i <= n; i++)
    {
        sum += 1/jc(i);
    }
    printf("%.10lf", sum);
}
