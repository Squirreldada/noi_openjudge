#include <stdio.h>
int op(int a)
{
	int sum = 1;
	while(a > 70)
	{
		sum ++;
		a -= 70;
	}
	return sum;
}

int main()
{
	int n, now;
	double sum;
	scanf("%d",&n);
	for(int i = 1; i <= n; i++)
	{
		scanf("%d", &now);
		sum += op(now);
	}
	printf("%.1lf\n", sum/10);
}
