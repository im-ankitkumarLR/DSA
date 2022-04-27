#include<iostream>
using namespace std;


int getSum(int *arr, int n){
   
   int sum=0;
   for(int i=0; i<n; i++){
    sum+= arr[i];


   }
return sum;

}
 
int main() {

int n;
cin>>n;

// Variable size Array  
int* arr = new int[n];


// taken array from the user as a input  
for(int i=0;i<n;i++){

    cin>>arr[i];
}

int ans =getSum(arr,n);
 cout <<ans<<endl;
 cout <<n<<endl;





}
