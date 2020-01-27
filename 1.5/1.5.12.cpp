#include <iostream>
using namespace std;
int main()
{
	int i, n, M, a, times=0;
	cin >> n >> M;
	for (i = 1; i <= n; i++)
	{
		cin >> a;
		if (a == M)
		{
			times++;
		}
	}
	cout << times << endl;
}