#include <iostream>
using namespace std;

// To check the given number is Prime or Not.

bool isPrime(int num)
{

    for (int i = num - 1; i >= 2; i--)
    {

        if (num % i == 0)
        {
            return 0;
            // break;
        }
    }
    return 1;
}

int main()
{

    int a;
    cout << "Enter the number " << endl;
    cin >> a;
    
    int result=isPrime(a);
      cout << result << endl;
};