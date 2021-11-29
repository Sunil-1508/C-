#include<iostream>
using namespace std;
class a
{
	protected:
		void showa()
		{
			cout<<" member  function of class a"<<endl;
		}
};
class b: virtual public a
{
	protected:
		void showb()
		{  showa();
			cout<<" member function of class b"<<endl;
		}
};
class c: virtual public a
{
	protected:
		void showc()
		{ 	 showa();
			cout<<" member function of class c"<<endl;
		}
};
class d:public b , public c
{
	public:
		void showd()
		{	showb();
		 	showc();
			cout<<" member function of class d"<<endl;
		}
};
int main()
{
	d D;

	D.showd();
	return 0;
}
