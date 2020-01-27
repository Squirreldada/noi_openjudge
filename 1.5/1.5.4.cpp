#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << setiosflags(ios::fixed) << setprecision(5);
	int i, n, x, all=0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> x;
		all += x;
	}
	cout << all << " " << (double)all / n << endl;

}