#include <iostream>
using namespace std;
int M, N, X, n, power=0, days=1, n_now;
int power_recover()
{
    //cout << "recovering...\n";
    while (X>0&&power<M)
    {
        if(power+n<M)
        {
            power+=n;
        }
        else
        {
            power=M;
        }
        X--;
    }
    //cout << "X is " << X << endl;
    //cout << "power is " << power << endl;
    //cout << "recovered\n\n";
}

int war()
{
    //cout << "war\n";
    for(int i=1; i<=M; i++)
    {
        //cout << "day " << days << ": ";
        if(days==n)
        {
            //cout << "days = n";
            n_now++;
            //cout << " n_now = " << n_now << endl;
            days=1;
        }
        //else
        //{
            //cout << "not n\n";
        //}
        
        days++;
    }
    power=0;
    days=1;
    n=n_now;
    //cout << "end war\n\n";
}

int main ()
{
    cin >> M >> N >> X;
    n=N;
    n_now=n;
    while(X>0||power==M)
    {
        if(power==M)
        {
            war();
        }
        else
        {
            power_recover();
        }
    }
    cout << n << endl;
}