#include <iostream>
using namespace std;
void printarray(int arr[], int size)
{
    cout << "printing the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "";
    }
    cout << "printing is done " << endl;
}
int main()
{

    // declare
    int one[16];
    cout << "value at index 15 is" << one[15] << endl;

    // initialising array
    int second[4] = {1, 2, 3, 4};
    cout << " value at index 3 is " << second[3] << endl;

    int third[15] = {2, 3};
    
    printarray(third, 15);
        // int n = 15;
        ////cout << "printing the array " << endl;
        // for (int i = 0; i < n; i++)
        //{
        //     cout << third[i] << " " << endl;
        // }

        int fourth[10] = {0};
       
    printarray(fourth, 10);
        // cout << "printing the array " << endl;
        // for (int i = 0; i < n; i++)
        //{
        //     cout << fourth[i] << "";
        // }

        int fivth[10] = {1};
        
    printarray(fivth, 10);
    // cout << "printing the array " << endl;
    // for (int i = 0; i < n; i++)
    //{
    //     cout << fivth[i] << "";
    // }
}