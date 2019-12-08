#include <iostream>
using namespace std;
int main ()
{
	int n,x,y,c;
	cin >> n >> x >> y;
	if (y%x==0)
		{
			c=y/x;
		}
	else
		{
			c=y/x+1;
		}
	if (n>c)
		{
			cout << n-c << endl;
		}
	else
		{
			cout << "0" << endl;
		}
}
/*
{
	int n,x,y;
	double z;
	cin >> n >> x >> y;
	z = n-y/x;
}
	if (z>=(int)n-y/x) 
		{
			printf("1");
			if (z>(int)n-y/x)
				{
					printf("2");
					cout << (int)n-y/(x-1) << endl;
				}
			else
				{
					printf("Fuck you!");
					cout << (int)n-y/x << endl;
				}
		}
	
}*/
