#include <iostream>
#include <cmath>
using namespace std;
int n, people;
double x, y, timesum=0;
double time_move(double x, double y)
{
    //cout << x << y;
    return 2*sqrt(pow(x,2) + pow(y,2))/50;
}
int main ()
{
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x >> y >> people;
        timesum += (time_move(x,y) + people + people*0.5);
    }
    if(double(timesum-(int)timesum)!=0)
    {
        cout << (int)timesum + 1;
    }
    else
    {
        cout << timesum;
    }
}