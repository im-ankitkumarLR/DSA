#include<iostream>
using namespace std;

int main(){



    int k =5;
    int *ptr =&k;

    cout<< "Before "<<k<<endl;

    (*ptr)++;

cout<< "After "<<k<<endl;




}