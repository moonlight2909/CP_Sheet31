#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 3, 10, 4, 6};
    int max = arr[0];
    int max2 = arr[0];
    int max3 = arr[0];
    for (int i = 0; i <= 4; i++)
    {
        if (arr[i] > max)
        {
            max3 = max2;
            max2 = max;
            max = arr[i];
        }
        else if (arr[i] > max2)
        {
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3)
        {
            max3 = arr[i];
        }
    }
    cout << "the largest of three are " << max << " " << max2 << " " << max3;
    return 0;
}