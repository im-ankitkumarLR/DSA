#include<iostream>
#include<map>
using namespace std;


int main(){

map<int,string>k;

k[1]="Ankit";
k[8]="Rahul";
k[3]="Sonu";
k[2]="Rashmika";


// before erage-----

cout<<"Before Erage"<<endl;
for(auto i:k){

cout<<i.first<<" "<<i.second<<endl;

}
//  After erage----
cout<<"After Erage"<<endl;
k.erase(3);


for(auto i:k){

cout<<i.first<<" "<<i.second<<endl;

}

};