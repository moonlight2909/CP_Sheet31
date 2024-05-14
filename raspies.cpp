#include <iostream>
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
        vector<int> arr;
        int ans = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int curr = k - x % k;
            if (x % k == 0)
            {
                curr = 0;
            }
            ans = min(ans, curr);
            arr.push_back(x);
        }
        if (k == 4)
        {
            int cnt = 0;
            for (auto it : arr)
            {
                if (it % 2 == 0)
                    cnt++;
            }
            if (cnt > 1)
            {
                ans = 0;
            }
            else
            {
                ans = min(ans, 2 - cnt);
            }
        }
        cout << ans << endl;
    }

    return 0;
}