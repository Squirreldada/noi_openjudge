#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a, out=0;
	int i;
	cout << setiosflags(ios::fixed) << setprecision(2);
	for (i = 1; i <= 12; i++)
	{
		cin >> a;
		out += a;
	}
	cout << "$" << out / 12;
}