#include<iostream>
using namespace std;
int main(){

int b,ans=1;
cout<<"Enter the number"<<endl;
cin>>b;

for(int i=0;i<=b+1;i++){
    ans=ans*b;
    b--;


}
cout<<ans<<endl;
     
}
