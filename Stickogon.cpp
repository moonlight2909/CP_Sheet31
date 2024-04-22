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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        unordered_map<int, int> mp;
        for (auto ele : arr)
        {
            mp[ele]++;
        }
        int count = 0;
        for (auto x : mp)
        {
            count += (x.second / 3);
        }
        cout << count << endl;
    }
    return 0;
}