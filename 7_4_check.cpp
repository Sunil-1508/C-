// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,i,j=0,r,c=0;
    cout<<"enter the num";
    cin>>n;
    i=n;
  while(n!=0)
    {
        j++;
        r=n%10;
        if(r==4||r==7)
        {
            c++;
           
        }
        n=n/10;
    }
   if(c==j)
   {
       cout<<"yes";
   }
   else{
       cout<<"no";
   }

    return 0;
}
