#include <iostream>
using namespace std;
int main()
{
	int m, n, all = 0;
	cin >> m >> n;
	for (; m <= n; m++)
	{
		if (m % 17 == 0)
		{
			all += m;
		}
	}
	cout << all << endl;
}