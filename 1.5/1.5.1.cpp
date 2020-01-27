#include <iostream>
using namespace std;
int main()
{
	int renshu,i,a,b=0;
	cin >> renshu;
	for (i=0;i<renshu;i++)
	{
		cin >> a;
		b += a;
	}
	printf("%.2lf\n",(double)b/renshu);
}