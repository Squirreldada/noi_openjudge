#include <iostream>

using namespace std;

int main ()
{
    int m, n, need, sum = 0;
    cin >> m >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> need;
        //cout << "need " << need << ", left" << m << endl;
        if(need > m)
        {
            sum ++;
        }
        else if(need <= m)
        {
            m-=need;
        }
    }
    cout << sum << endl;
}