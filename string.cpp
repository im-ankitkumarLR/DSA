#include<iostream>
using namespace std;

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
  cout<<"Length is "<<king(name)<<endl;

};