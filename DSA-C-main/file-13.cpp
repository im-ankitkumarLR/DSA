#include<iostream>
using namespace std;

bool isEven(int num1){
    if(num1%2==0){
        return true;
    }else{
         return false;
    }  

    


}



int main(){

int a;
cout<<"Check the Even number"<<endl;
cin>>a;

if(isEven(a)){
cout<<"Even"<<endl;


}else{
    cout<<"odd"<<endl;
}



};