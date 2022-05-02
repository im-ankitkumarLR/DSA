#include<iostream>
using namespace std;


int combination(int n,int r){
      int ans=1,sigma=1,sigma2=1;
       for(int i=n;i>=1;i--){
        ans=ans*i;
       }
       for(int i=r;i>=1;i--){
        sigma=sigma*i;
       }

     for(int i=n-r;i>=1;i--){
        sigma2=sigma2*i;
       }

    return ans/(sigma*sigma2);



}

int main(){

int a,b;
cout<<"Enter The N value"<<endl;
cin>>a;
cout<<"Enter The R value"<<endl;
cin>>b;

int result=combination(a,b);
cout<<result<<endl;

};