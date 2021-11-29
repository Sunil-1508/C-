#include<iostream>
using namespace std;
class A
{
	public:
		int x,y;
};
class B:public A
{
	public:
		B()
		{
			x=10;
			y=4;
		}
};
class C:public A
{
	public:
		C()
		{
			y=5;
			x=11;
		}
};
class D:public B,public C
{
	public:
		void sum()
		{
			cout<<"sum = "<<x+y<<endl;
		}
};
int main()
{
	D obj;
	obj.sum();
	return 0;
}
