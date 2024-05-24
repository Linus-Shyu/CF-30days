#include <iostream>
#define endl '\n'

using namespace std;

void solve()
{
    for(int j = 1; j <= 8; j++)
    {
        for(int h = 1; h <= 8; h++)
        {
            char a;
            cin >> a;
            if(a != '.')
            {
                cout << a;
            }
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        solve();
    }
    return 0;
}
