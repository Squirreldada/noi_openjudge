#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i, n, Au=0, Ag=0, Cu=0, Au_all=0, Ag_all=0, Cu_all=0;
	cin >> n;
	for (i = 1; i <= n; i++)
	{
		cin >> Au >> Ag >> Cu;
		Au_all += Au;
		Ag_all += Ag;
		Cu_all += Cu;
	}
	cout << Au_all << " " << Ag_all << " " << Cu_all << " " << Au_all + Ag_all + Cu_all << endl;
}