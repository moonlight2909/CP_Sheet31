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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 1;
        int maxi = 1;
        sort(v.begin(), v.end());

        for (int i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] > k)
            {
                count = 1;
            }
            else
            {
                ++count;
            }
            maxi = max(count, maxi);
        }
        cout << n - maxi << endl;
    }
    return 0;
}
