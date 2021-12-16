//template overloading in c++
#include<iostream>
using namespace std;
template <typename t1, typename t2>
  void sample(t1 x,t2 y)
     {
       cout<<x+y<<"\tdifferent data type\n";
     }
template <typename t1>
   void sample(t1 x,t1 y)
     {
       cout<<x+y<<"\tsame data type\n";
     }
int main()
{
  
    sample(7.5,2.5);  //same data type
    sample(2,8);      //same data type
    sample(6,4.5);    //different data type
    sample(3.5,7);    //different data type
   
}