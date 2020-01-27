#include <iostream>
using namespace std;
int main ()
{
    int n;
    double all, good, pe , jall, jgood, jpe;
    cin >> n >> jall >> jgood;
    jpe = jgood/jall;
    for(int i = 1; i < n; i++)
    {
        cin >> all >> good;
        pe = good/all;
        if((pe-jpe)>0.05)
        {
            cout << "better" << endl;
        }
        else if((pe-jpe)<-0.05)
        {
            cout << "worse" << endl;
        }
        else
        {
            cout << "same" << endl;
        }
    }
}