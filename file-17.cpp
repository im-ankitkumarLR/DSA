#include <iostream>
using namespace std;

// Introduction of DSA from Array.....
//   Array

bool search(int arr[],int n){

    for (int i = 0; i <10; i++)
    {
        if (arr[i]==n)
        {
            return 1;
        }
        
    }
    

return 0;

}






int main()
{

    int arr[10] = {2, 3, 5, 6, 8, 12, 65, 7, 34, 1};
    //  Check whether any element is Present or not..
      
      int n;
    cout<<"Enter any number "<<endl;
cin>>n;

bool result=search(arr,n);
if(result){
    cout<<" YES Number hai bhai"<<endl;

}else{
    cout<<"NO Number nahi hai bhai"<<endl;

}

     
};