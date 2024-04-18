#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int res = 1;
        int n;
        int count = 01;
        cin >> n;
        string s;
        cin >> s;
        for (int i = 0; i < n - 1; i++)
        {
            if (s[i] == s[i + 1])
                count++;
            else
                count = 1;
            res = max(res, count);
        }
        cout << res + 1 << endl;
    }
    return 0;
}