#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double a,b,c,d,x;
	cin >> x >> a >> b >> c >> d;
	double x3 = pow(x,3);
	double x2 = pow(x,2);
	printf("%.7lf\n",(double)a*x3+b*x2+c*x+d);
}
