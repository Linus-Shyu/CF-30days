#include <iostream>

using namespace std;

void solve() {
    //处理下输入输出
    int h, m;
    char c;
    cin >> h >> c >> m;
    //如果时间小于12点直接加上AM，如果大于12点加上PM
    string time = (h < 12 ? " AM" : " PM");
    //如果时间为true，输出10以内的时间，如果为false则输出12
    //0为false，其他为true
    h = (h % 12 ? h % 12 : 12);
    //如果时间小于10则在数字前加0，如果分钟数小于时也加0，如果都不满足，则直接输出。
    cout << (h < 10 ? "0" : "") << h << c << (m < 10 ? "0" : "") << m << time << '\n';
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