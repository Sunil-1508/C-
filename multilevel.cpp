#include<iostream>
using namespace std;
class area
{
protected:
		void showa(int l,int b)
		{
		
		cout<<"area="<<l*b<<endl;
}
};
class perimeter: public area
{
protected:
		void showp(int l,int b)
		{
		showa(l,b);
		cout<<"perimeter="<<2*(l+b);
		
}
};
class rectangle:public perimeter
{
public:
	 void get()
	 { int l,b;
	 	cout<<"enter length & breadth"<<endl;
	 	cin>>l>>b;
	 	showp(l,b);
	 
	 	
	 }
};

int main()
{
	rectangle r;
	r.get();
	return 0;
}
