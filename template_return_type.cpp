#include<iostream>
using namespace std;
template <typename t1, typename t2>
  t2 sample(t1 x,t2 y)
     {
       return x+y;
     }
int main()
{
  float f,j,k;
    f=sample(4,4.8);
    j=sample(1.8,8.1); 
    k=sample(60,6);
    cout<<f<<endl<<j<<endl<<k;
}
