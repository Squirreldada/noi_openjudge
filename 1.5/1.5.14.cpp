#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int i, n;
	double x;
	cin >> x >> n;
	for (i = 1; i <= n; i++)
	{
		x += x * 0.001;
	}
	printf("%.4lf\n",x);
}