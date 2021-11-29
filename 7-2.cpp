#include<iostream>
using namespace std;
class a
{
protected:
		a()
		{
		
		cout<<"constructor invoked in a"<<endl;
		}
      ~a()
		{
		
		cout<<"destructor invoked in a"<<endl;
		}
};
class b:public a
{
protected:
		b()
		{
		
		cout<<"constructor invoked in b"<<endl;
		}
      ~b()
		{
		
		cout<<"destructor invoked in b"<<endl;
		}
};
class c: public a
{
protected:
		c()
		{
		
		cout<<"constructor invoked in c"<<endl;
		}
      ~c()
		{
		
		cout<<"destructor invoked in c"<<endl;
		}
};
class d:public b,public c
{
public:
		d()
		{
		
		cout<<"constructor invoked in d"<<endl;
		}
      ~d()
		{
		
		cout<<"destructor invoked in d"<<endl;
		}
};

int main()
{
	d D;
	return 0;
}
