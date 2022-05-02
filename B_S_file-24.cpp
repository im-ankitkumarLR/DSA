 

#include <iostream>
using namespace std;


int firstindex(int arry[], int size, int occur)
{

    int start = 0;
    int end = size - 1;
    int mid = (end + start) / 2;
    int ans=-1;
    while (start <= end)

    {
        // For the first occurance

        if (arry[mid] == occur)
        {
            ans= mid;
            end =mid-1;
        }
        else if (arry[mid] < occur)
        {
            // right me jana hai
            start = mid + 1;
        }
        else if (arry[mid] > occur)
        {
            // <<<<<<<<<to left me jana hai ....

            end = mid - 1;
        }

        mid = start + (end - start) / 2;

        //  Now for the second occurance..
    }

    return ans;
}

int lastindex(int arry[], int size, int occur)
{

    int start = 0;
    int end = size - 1;
    int mid = (end + start) / 2;
    int ans=-1;
    while (start <= end)

    {
        // For the first occurance

        if (arry[mid] == occur)
        {
            ans=mid;
            start =mid+1;
        }
        else if (arry[mid] < occur)
        {
            // right me jana hai
            start = mid + 1;
        }
        else if (arry[mid] > occur)
        {
            // <<<<<<<<<to left me jana hai ....

            end = mid - 1;
        }

        mid = start + (end - start) / 2;

        //  Now for the second occurance..
    }

    return ans;
}

int main()
{

    int arr[7] = {1, 2, 3, 3, 3, 3, 5};

    int k = firstindex(arr, 7, 3);
    int p = lastindex(arr, 7, 3);
    cout << k << endl;
    cout << p << endl;
 int number =p-k+1;
 cout<<number<<endl;
};