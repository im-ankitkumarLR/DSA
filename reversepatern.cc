#include<iostream>
using namespace std;
int main(){

//   printf("Hello India\n");
int i,j,n;
cout<<"Enter the number"<<endl;
cin>>n;
for ( i = 1; i<=n; i++)
{
    for ( j = 1; j<=i; j++)
    {
        cout<<i-j+1;
    }
    cout<<endl;
}

