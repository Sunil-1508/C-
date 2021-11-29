#include<iostream>
using namespace std;
class rectangle
{
	protected:
		int l,b;
	 void get()
	 {
	 	cout<<"enter length & breadth "<<endl;
	 	cin>>l>>b;
	 	
	 }
};
class Area:public rectangle
{
	public:
		void show()
		{
		get();
		cout<<"area="<<l*b;
}
};
int main()
{
	Area a;
	a.show();
	return 0;
}
