#include<iostream>
using namespace std;
int main()
{
	int a,b;
	try{
		cout<<"enter a,b values"<<endl;
		cin>>a>>b;
		if(b==0)
			throw b;
		else
			cout<<"division ="<<a/b;
		}
		catch(int x){
		cout<<"ZERO DIVISION ERROR"<<endl<<"b can't be zero"<<endl;
		}
}

