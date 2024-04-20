#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int x, n;
        cin >> x >> n;
        int ans = x;
        int val;
        val = n % 4;
        if (n == 0)
            cout << x << endl;
        else
        {
            for (int i = n - val + 1; i <= n; i++)
            {
                if (ans % 2 == 0)
                    ans -= i;
                else
                    ans += i;
                // cout << ans << " " ;
            }
            if (val == 0)
                cout << x << endl;
            else
                cout << ans << endl;
        }
    }
}