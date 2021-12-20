#include<iostream>
using namespace std;
template <typename t1,typename  t2>
void sample(t1 a,t2 b)
	{ 
		cin>>a>>b;
		cout<<"sum of two numbers = "<<a+b<<endl;
	}
template <typename t>
t sample2(t a,t b)
	{
	return a+b;
	}
int main()
{ 
 	sample(10,20);
	sample(1.5,3);
	cout<<sample2(1.2,6.8);
}
