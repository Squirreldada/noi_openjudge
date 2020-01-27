#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << setiosflags(ios::fixed) << setprecision(4);
	int n, i;
	double a, out = 0;
	cin >> n;
	for (i = 1; i <= n;i++)
	{
		cin >> a;
		out += a;
	}
	cout << out/n << endl;
}