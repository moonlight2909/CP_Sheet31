
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int tt;
    tt = 1;
    cin >> tt;
    while (tt--)
    {
        int i, j, m, n, k, h;
        cin >> n >> k;
        ll a[n + 5];
        map<ll, ll> mp;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        i = n - 1;
        while (mp[a[n - 1]] != k && i >= 0)
        {
            if (a[i] == a[n - 1])
                mp[a[i]]++;
            i--;
        }
        for (; i >= 0; i--)
        {
            mp[a[i]]++;
        }
        if (mp[a[0]] >= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
