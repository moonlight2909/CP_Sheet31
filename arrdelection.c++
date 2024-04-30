
/*#include <iostream>

using namespace std;

int main()
{
     Enter your code here. Read input from STDIN. Print output to STDOUT
    int n, value, check = 0;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> value;
    for (int i = 0; i < (n - 1); i++)
        if (arr[i] == value)
        {
            arr[i] == arr[i + 1];
            value == arr[i + 1];
            check = 1;
        }
    if (arr[n - 1] == value)
        check = 1;
    if (check == 1)
        for (int i = 0; i < (n - 1); i++)
            cout << arr[i] << " ";
    else
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
    cout << endl;
    return 0;
}*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, count = 0;
    cin >> n;
    if (n > 20 || n <= 0)
        cout << "Invalid array size" << endl;
    else
    {
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            if (c >= 'a' && c <= 'z')
                count++;
        }
        if (count == 0)
            cout << -1 << endl;
        else
            cout << count << endl;
    }
    return 0;
}