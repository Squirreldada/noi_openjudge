#include <iostream>

using namespace std;

int main ()
{
    int L, R, sum = 0;
    cin >> L >> R;
    for(int i = L; i<=R; i++)
    {
        L = i;
        //cout << "-- L = " << L << ", ";
        while(L>=10)
        {
            if(L % 10 == 2)
            {
                sum++;
            }
            L/=10;
        }
            if(L==2)
            {
                sum++;
            }
        //cout << "sum = " << sum << endl;
    }
    cout << sum;
}