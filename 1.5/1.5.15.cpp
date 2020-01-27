#include <iostream>
using namespace std;
int main()
{
	int i,y;
	double m,r;
	cin >> r >> m >> y;
	for(i=1;i<=y;i++)
	{
		m*=(1+(r/100));
	}
	cout << (int)m;
}