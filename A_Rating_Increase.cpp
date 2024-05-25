#include <iostream>
#include <cstring>

#define endl '\n'

using i64 = long long;
using namespace std;

void solve()
{
    std::string s;
    std::cin >> s;
    
    for (int i = 1; i < s.size(); i++) {
        string a = s.substr(0, i);
        string b = s.substr(i);
        if (b[0] != '0' && stoi(b) > stoi(a)) {
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int T;
    cin >> T;
    for(int i = 1; i <= T; i++)
    {
        solve();
    }
}