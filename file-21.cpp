#include <iostream>
using namespace std;

int findUniqueNumber(int arr[], int n)
{

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }

   cout<<ans<<endl;
}

int main()
{

    // int size;

    int arr[7] = {2, 3, 4, 2, 3, 4, 9};

    findUniqueNumber(arr, 7);

    //   cout<<ans;
};