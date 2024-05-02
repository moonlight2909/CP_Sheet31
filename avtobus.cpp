#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n % 2 == 1 || n < 4)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n / 6 + (n % 6 + 2) / 4 << " " << n / 4 << endl;
        }
    }
    return 0;
}