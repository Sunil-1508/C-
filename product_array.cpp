//template overloading in c++
#include<iostream>
using namespace std;
int main()
{    int n,j,k;
    cout<<"enter no.of ele in array"<<endl;
    cin>>n;
int arr[n],p[n];
cout<<"enter ele in the array"<<endl;
for(j=0;j<n;j++)
    { 
    cin>>arr[j];
    }
    for(j=0;j<n;j++)
    { 
    p[j]=1;
    }
for(j=0;j<n;j++)
    {
        for(k=0;k<n;k++)
        {   
            if(k!=j)
            p[j]=p[j]*arr[k];
        } 
    }
for(j=0;j<n;j++)
    { 
    cout<<p[j]<<" ";
    }
}
