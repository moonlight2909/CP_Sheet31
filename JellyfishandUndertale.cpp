#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long total = b;
        for (auto x : arr)
        {
            total += min(1LL * x, 1LL * a - 1);
        }
        cout << total << endl;
    }
}
