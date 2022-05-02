#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int>k;

    k.push_back(1);
    k.push_back(4);
    k.push_back(5);
    k.push_back(7);
    k.push_back(9);

//  Binary Search algorithm use  to any element in the vector
    cout<<"Finding --> 5 "<<binary_search(k.begin(),k.end(),5)<<endl;



};