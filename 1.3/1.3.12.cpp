#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
	double r,pi;
	cin >> r;
	pi = 3.14;
	double r3 = pow(r,3);
	printf("%.2lf\n",((double)4/3)*pi*r3);
}
