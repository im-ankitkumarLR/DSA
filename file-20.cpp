#include <iostream>
using namespace std;

int alternatearray(int array[], int n)
{

    // int start=0;
    // int alternate=n-
    for (int i = 0; i < n; i+=2)
    {

        if (i + 1 < n)
        {
            swap(array[i], array[i + 1]);

            // cout<<array<<endl;
        }
    }
}

int printarray(int bye[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << bye[i];
    }
        cout <<endl;

}

int main()
{
    int arr[6] = {2, 4, 5, 6, 7, 8};
    cout << "Alternate Array" << endl;

    alternatearray(arr, 6);

    printarray(arr, 6);
};
