#include <iostream>
using namespace std;
int main()
{

    int a, b;
    cout << "Enter a number " << endl;
    cin >> a;
    cout << "Enter the second number" << endl;
    cin >> b;
    char cp;
    cout<<"Enter the operation"<<endl;
    cin>>cp;
    switch (cp)
    {

    case '+':cout << a + b<<endl;
        break;
    case '-':cout << a - b<<endl;
         break;  
    case '*':cout << a * b<<endl;
         break; 
    case '/':cout << a / b<<endl;
         break;
    case '%':cout << a % b<<endl;
         break;
    default:cout << "Enter the valid operation";
    }
};