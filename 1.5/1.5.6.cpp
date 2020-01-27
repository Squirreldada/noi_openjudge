#include <iostream>

using namespace std;

int main()
{
    int i,n,a,mymax,mymin;
    cin >> n;
    cin >> mymax;
    mymin = mymax;
    for (i = 1;i<n;i++)
    {
        cin >> a;
        if (a>=mymax)
        {
            mymax = a;
        }
        if(a<=mymin)
        {
            mymin = a;
        }
    }
    cout << mymax - mymin;
}