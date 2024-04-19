#include <bits/stdc++.h>
using namespace std;
int n, t, a[114514];
int main()
{
    cin >> t;
    while (t--)
    {
        if (t < 0)
        {
            break;
        }
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (a[1] == 1)
            {
                a[1]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] == 0)
            {
                continue;
            }
            if (a[i] == 1)
            {
                a[i]++;
            }
            if (a[i] % a[i - 1] == 0)
            {
                a[i]++;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}