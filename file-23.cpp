#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            // to right side me chala jaye
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid = (start + end) / 2;
    }
    return -1;
}

int main()
{

    int even[6] = {2, 4, 6, 8, 10, 12};

    int odd[6] = {3, 7, 9, 11, 13, 15};

    int k1 = findDuplicate(even, 6, 10);
    int k2 = findDuplicate(odd, 6, 7);

    cout << "Index of key Even Array" << k1<<endl;
    cout << "Index of key Odd Array " << k2<<endl;
    // return 0;
};