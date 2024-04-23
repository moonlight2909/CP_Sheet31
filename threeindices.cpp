#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        bool ans = false;
        for (int i = 1; i < n - 1; i++)
        {
            if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
            {
                cout << "YES" << "\n";
                cout << i << " " << i + 1 << " " << i + 2 << "\n";
                ans = true;
                break;
            }
        }
        if (!ans)
            cout << "NO" << "\n";
    }

    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;

// pair<int, int> f(int n, vector<int> &arr)
// {
//     for (int i = 0; i < n - 2; i++)
//     {
//         for (int j = i + 1; j < n - 1; j++)
//         {
//             for (int k = j + 1; k < n; k++)
//             {
//                 if (arr[i] < arr[j] && arr[j] > arr[k])
//                 {
//                     return make_pair(i + 1, j + 1);
//                 }
//             }
//         }
//     }
//     return make_pair(-1, -1);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//     bool ans = false;
//     for (int i = 1; i < n - 1; i++)
//     {
//         if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
//         {
//             cout << "YES" << "\n";
//             cout << i << " " << i + 1 << " " << i + 2 << "\n";
//             ans = true;
//             break;
//         }
//     }
//     if (!ans)
//     {
//         cout << "NO" << "\n";
//     }

// }
// // int t;
// // cin >> t;
// // while(t--) {
// //     int n;
// //     cin >> n;
// //     vector<int> arr(n);
// //     for(int i = 0; i < n; i++) {
// //         cin >> arr[i];
// //     }
// //     pair<int, int> index = f(n, arr);
// //     if(index.first != -1) {
// //         cout << "YES" << endl;
// //         cout << index.first << " " << index.second << " " << index.second + 1 << endl;
// //     } else {
// //         cout << "NO" << endl;
// //     }
// // }
// // return 0;
// }
