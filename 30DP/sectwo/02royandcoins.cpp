#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> f(n + 1, 0);
    int m;
    cin >> m;
    vector<int> l(n + 1, 0);
    vector<int> r(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int L, R;
        cin >> L >> R;
        l[L]++;
        r[R]++;
    }
    f[1] = l[1];
    for (int i = 2; i <= n; i++)
    {
        f[i] = l[i] - r[i - 1] + f[i - 1];
    }
    vector<int> cnt(10000005, 0);
    for (int i = 0; i <= n; i++)
    {
        int coins = f[i];
        cnt[coins]++;
    }
    // find suffix sum
    for (int i = cnt.size() - 2; i >= 0; i--)
    {
        cnt[i] = cnt[i] + cnt[i + 1];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int num;
        cin >> num;
        cout << cnt[num] << "\n";
    }
    return 0;
}