#include <iostream>

using namespace std;

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    int total = (a + b + c) / 2;
    if((a + b + c) % 2 != 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        if(a + b >= c)
        {
            cout << total << endl;
        }
        else
        {
            cout << a + b << endl;
        }
    
    }
}

int main()
{
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        solve();
    }
    return 0;
}