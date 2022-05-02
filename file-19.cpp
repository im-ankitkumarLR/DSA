#include<iostream>
using namespace std;

// Reverse the Array using Swap method ......... 

int reversearray(int bye[],int n){

      

      int start =0;
      int end =n-1;

      for (int i = 0; i <n; i++)
      {
          while (start<=end)
          {
             swap(bye[start],bye[end]);

              start++;
              end--;
          }
          
      }
      

}

void myfunc(int myarray[], int n){


for (int i = 0; i <n; i++)
{
    cout<<myarray[i];
}

cout<<endl;


}








int main(){

int arr[10] ={1,2,3,4,5,6,7,8,9,15};

int brr[5]= {2,4,6,8,1};

reversearray(arr,10);
reversearray(brr,5);

myfunc(arr,10);
myfunc(brr,5);




}