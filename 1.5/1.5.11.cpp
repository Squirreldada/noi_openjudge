#include <iostream>
using namespace std;
int main()
{
	int i, k, a, one = 0, five = 0, ten = 0;
	cin >> k;
	for (i = 1; i <= k; i++)
	{
		cin >> a;
		if (a == 1)
		{
			one++;
		}
		else if (a == 5)
		{
			five++;
		}
		else if (a == 10)
		{
			ten++;
		}
	}
	cout << one << "\n" << five << "\n" << ten << endl;
}