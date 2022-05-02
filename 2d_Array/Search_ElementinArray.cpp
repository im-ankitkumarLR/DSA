#include<iostream>
using namespace std;


bool checknumber(int arr[][4], int target ,int n ,int m){

for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){

         if(arr[i][j]==target){

             return 1;
         }

     }

}
return 0;
}




int main(){

int arr[3][4];

// take input from user 

 cout<<"Enter the all Elements"<<endl;
for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){

         cin>>arr[i][j];
     }

}
for(int i=0;i<3;i++){
     for(int j=0;j<4;j++){

         cout<<arr[i][j]<<" ";
     }
   cout<<endl;
}

int target;
cout<<"Enter the number"<<endl;
cin>>target;
if(checknumber(arr,target,3, 4)){

    cout<<"Present"<<endl;
}else{
    cout<<"Not Present"<<endl;
}



}