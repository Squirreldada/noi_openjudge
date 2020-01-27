#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int n, m, all=0;
	cin >> m >> n;
	for (; m <= n; m++)
	{
		if (m % 2 != 0)
		{
			all+=m;
		}
	}
	cout << all << endl;
}