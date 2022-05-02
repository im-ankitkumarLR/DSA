#include<iostream>
using namespace std;


void reverse(char name[],int n){

    int s=0;
    int e=n-1;
    while(s<e){
      swap(name[s++],name[e--]);
    //   s++;
    //   e--;

    }
}



int king(char name[]){
    int cout=0;
    for (int i = 0; name[i]!='\0'; i++)
    {
        cout++;
    }
    
  return cout;

}




int main(){

   char name[8];
   cout<<"Enter your name"<<endl;
   cin>>name;
   cout<<"Your name is this "<<" ";
   cout<<name<<endl;
   int k=king(name);
  cout<<"Length is "<<k<<endl;
   reverse(name,k);
  cout<<"Your name is this "<<name<<endl;

};