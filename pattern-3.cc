#include<iostream>
using namespace std;
int main(){
 
    //   A 
    //   B B 
    //   C C C
    int i, j, n;
    char ch = 65;
    cout << "Enter the number" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {  
        for (j= 1; j<=i; j++)
        {
            cout<<ch;
        }
            ch++;
        cout<<endl;
    }

}


    



