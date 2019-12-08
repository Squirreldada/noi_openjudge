#include <iostream>
using namespace std;
int main ()
{
	int h,r,answer;
	double pi,ml;
	pi = 3.14159;
	cin >> h >> r;
	ml = pi*r*r*h/1000;
	answer = 20/ml + 1;
	cout << answer << endl;
}
