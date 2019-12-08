#include <iostream>
using namespace std;
int main ()
{
    double h, sum = 0, after = h;
    cin >> h;
    bool up = true;
    for (int i = 1;i <= 10;)
    {
        if(up==true)
        {
            sum+=h;
            up = false;
            i++;
        }

        if(up==false)
        {
            up = true;
            after=h/2;
            h/=2;
            sum+=h;
        }
    }
    cout << sum-h << "\n" << after << endl;
}