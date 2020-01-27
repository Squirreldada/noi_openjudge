#include <iostream>
using namespace std;
int main()
{
	long long i, a, n, na;
	cin >> a >> n;
	na = a;
	for (i = 1; i < n; i++)
	{
		na *= a;
	}
	cout << na << endl;
}