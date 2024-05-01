#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<ll> v(n + 1, 0);
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i - 1] == 0 && v[i] != 0)
            { 
                cnt++;
            }
        }
        cnt = min(cnt, 2);
        cout << cnt << '\n';
    }

    return 0;
}
