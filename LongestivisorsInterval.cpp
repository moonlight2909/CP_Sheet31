#include <iostream>
using namespace std;

long long n;
int t;
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        int ans = 2;
        while (n % ans == 0)
            ans++;
        cout << ans - 1 << endl;
    }
    return 0;
}
