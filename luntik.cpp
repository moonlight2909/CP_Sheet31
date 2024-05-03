#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        long sum = 0;
        int zero = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
            if (v[i] == 0)
            {
                zero++;
            }
            if (v[i] == 1)
            {
                one++;
            }
        }
        long long ans = 0;
        long long d = 1;
        if (zero == 0)
        {
            ans += one;
        }
        else
        {
            while (zero--)
            {
                d = d * 2;
            }
            ans += (one * d);
        }
        cout << ans << endl;
    }
    return 0;
}