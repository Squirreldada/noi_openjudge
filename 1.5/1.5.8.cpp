#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, n, x, all=0;
	cin >> n;
	for (i = 1; i < n; i++)
	{
		cin >> x;
		all += x;
	}
	cout << (n - 2) * 180 -all << endl;
}