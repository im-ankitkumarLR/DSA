#include<iostream>
#include<set>
using namespace std;

int main(){

set<int>k;


k.insert(3);
k.insert(5);
k.insert(1);
k.insert(0);
k.insert(9);
// 5 will print only ONE time  
k.insert(5);
k.insert(8);
k.insert(2);

for(int i:k){
  cout<<i<<" ";


}cout<<endl;






};