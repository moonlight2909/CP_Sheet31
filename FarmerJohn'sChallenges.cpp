#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (k > 1 && k < n)
        {
            cout << -1 << endl;
        }
        else
        {
            if (k == 1)
            {
                cout << 1 << " ";
                for (int i = 1; i < n; i++)
                {
                    cout << 2 << " ";
                }
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    cout << 1 << " ";
                }
            }
            cout << endl;
        }
    }
    return 0;
}