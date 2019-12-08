#include <iostream>
using namespace std;
int main ()
{
    long long n;
	cin >> n;
        while(n!=1&&n>0)
        {
            if(n%2==0)
            {
                cout << n << "/2=";
                n/=2;
                cout << n << endl;
            }
            else
            {
                cout << n << "*3+1=";
                n=n*3+1;
                cout << n << endl;
            }
        }
    cout << "End" << endl;
}