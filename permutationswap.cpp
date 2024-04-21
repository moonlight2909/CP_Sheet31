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
        vector<int> ans(n); 
        for (int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }
        int k = 0;
        for (int i = 0; i < n; i++)
        { 
            k = __gcd(k, abs(ans[i] - i - 1));
        }
        cout << k << endl;
    }
    return 0;
}
