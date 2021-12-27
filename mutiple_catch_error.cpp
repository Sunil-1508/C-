#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
	float a[100];
	int i,n,j;
	char c='f';
	try{
		cout<<"enter the no of elements in array"<<endl;
		cin>>n;
		cout<<"enter elements in array"<<endl;
		for(i=0;i<n;i++)
		{
				cin>>a[i];
				/*if(typeid(a[i]).name()!=c)
				{
					throw "only floating point numbers should be entered";
				}*/
		}
		cout<<"enter the index of the element to search";
		cin>>j;
		if(j>=5)
			throw j;
		else if(j<0)
		throw "index can't be a negitive value";	
		else
			cout<<a[j];
		}
		catch(float x){
		cout<<"array index out of range error"<<endl;
		}
		catch(char const*x)
		{
			cout<<x;
		}
			catch(char x)
		{
			cout<<x;
		}
}

