#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
    double sum = 0;
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        sum += pow(-1, i-1)/i;
        //printf("i = %d,\tsum = %.4lf\n", i, sum);
    }
    printf("%.4lf", sum);
}
