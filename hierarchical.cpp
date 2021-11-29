#include<iostream>
using namespace std;
class rectangle
{
protected:
	int l,b;
	 void get()
	 { 
	 	//cout<<"enter length & breadth"<<endl;
	 	//cin>>l>>b;
	l=10;
	b=2;                                                                                                                                 
	 	
	 }
};
class area:public rectangle
{
public:
		void showa()
		{ 
get();
 		cout<<"area="<<l*b<<endl;
}
};
class perimeter: public rectangle
{
public:
		void showp()
		{ 	
	get();
		cout<<"perimeter="<<2*(l+b);
}
};


int main()
{
	area a;
	perimeter p;
	a.showa();
	p.showp();
	
	return 0;
}
