#include <iostream>
using namespace std;
int main ()
{
	int N,i,have,sum;
	double K,all=200;
	cin >> N >> K;
	have = N;
	for(i=1;i<=20;i++)
	{
		 have+=N;
		 all+=all*K/100;
		 if(have>=all)
		 {
			 break;
		 }
	}
	if(have>=all)
	{
		cout << i+1 << endl;
	}
	else
	{
		cout << "Impossible" << endl;
	}
	
}