#include <iostream>
using namespace std;
int main ()
{
    long k, l1=1, l2=1, l3=0, t=0, out;
    cin >> k;
    for (int i = 1; i<=k; i++)
    {
        if(i>2)
        {
            if (t==0)
            {
                l3 = l1+l2;
                out = l3;
                t++;
            }
            else if (t==1)
            {
                l1=l3+l2;
                out = l1;
                t++;
            }
            else if (t==2)
            {
                l2=l1+l3;
                out = l2;
                t=0;
            }
        }
        else
        {
            if (k==1||k==2)
            {
                out = 1;
                break;
            }
        }
    }
    cout << out << endl;
}