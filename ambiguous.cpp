#include<iostream>
using namespace std;
class a
{
	public:
		void show()
		{
			cout<<" member  function of class a"<<endl;
		}
};
class b
{
	public:
		void show()
		{
			cout<<" member function of clas b"<<endl;
			
		}
};
class c:public a,public b
{
	public:
		void show()
		{
			cout<<" member function of clas c"<<endl;
			
		}
};
int main()
{
	c C;
	C.c::show();
	C.a::show();
	C.b::show();
	return 0;
	
}

