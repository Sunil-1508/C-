/*Given an array arr[] of n integers, construct a Product Array prod[] (of same size) such that prod[i] is equal to the product of all the elements of arr[] except arr[i]. Solve it without division operator in O(n) time.

Example : 

Try Amazon Test Series that Includes topic-wise practice questions on all important DSA topics along with 10 practice contests of 2 hours each. Designed with years of experience.

Input: arr[]  = {10, 3, 5, 6, 2}

Output: prod[]  = {180, 600, 360, 300, 900}*/
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
