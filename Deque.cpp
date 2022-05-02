#include <iostream>
#include <deque>
using namespace std;

int main()
{

    deque<int> k;
// ________________________________________________INSERTION OF ELEMETS In The Last & Starting ____________________________
    // pushing the elements in the last

    k.push_back(5);

    // pushing the elements in the starting

    k.push_front(10);
    k.push_front(8);

    // now print this

    for (int i : k)
    {

        cout << i << " ";
    }
     cout<<endl;

    // Deleton of elements from last 
  
  k.pop_back();
   for (int i : k)
    {

        cout << i << " ";
    }
      cout<<endl;



      cout<<"Element at First Index is "<<k.at(0)<<endl;
      cout<<" front Element  is "<<k.front()<<endl;
      cout<<" Back Element  is "<<k.back()<<endl;


};