#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
        }
        int ans = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                c1--;
            }
            else
            {
                c0--;
            }

            if (c0 < 0 or c1 < 0)
            {
                ans = s.size() - i;
                break;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}