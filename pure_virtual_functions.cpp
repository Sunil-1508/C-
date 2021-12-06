#include<iostream>
using namespace std;
class shape
{
	public:
	virtual void area()=0;
};
class rectangle:public shape
{
	public:
		int l,b;
		void area()
		{
			cout<<"enter length and breadth of rectangle"<<endl;
			cin>>l>>b;
			cout<<"area = "<<l*b<<endl;
		}
		
};
class circle:public shape
{
	public:
		int r;
		void area()
		{
			cout<<"enter radius of circle"<<endl;
			cin>>r;
			cout<<"area = "<<3.14*r*r<<endl;
		}
		
};
class triangle:public shape
{
	public:
		int h,b;
		void area()
		{
			cout<<"enter height and breadth of triangle"<<endl;
			cin>>h>>b;
			cout<<"area = "<<0.5*h*b<<endl;
		}
		
};
int main()
{
	rectangle r,*rptr;
	circle c,*cptr;
	triangle t,*tptr;
	rptr=&r;
	rptr->area();
	cptr=&c;
	cptr->area();
	tptr=&t;
	tptr->area();
}
