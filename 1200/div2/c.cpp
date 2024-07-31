#include <bits/stdc++.h>
using namespace std;
#define int long long
using vi = vector<int>;

void code()
{
    int n, k;
    cin >> n >> k;
    if (k % 2)
    {
        cout << "No\n";
        return;
    }
    int minimumVal = 0;
    vi v(1, 0);
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    for (int i = 1; i <= n; i++)
        minimumVal += abs((n - i + 1) - i);
    if (k > minimumVal)
    {
        cout << "No\n";
        return;
    }
    int i = 1;
    for (; k > 0; i++)
    {
        int j = n - i + 1;
        int d = abs(v[i] - v[j]) * 2;
        if (d >= k)
        {
            j = i + k / 2;
            k = 0;
        }
        swap(v[i], v[j]);
        k -= d;
    }
    cout << "Yes\n";
    reverse(v.begin(), v.end());
    v.pop_back();
    reverse(v.begin(), v.end());
    for (int i : v)
        cout << i << ' ';
    cout << '\n';
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
        code();
    return 0;
}