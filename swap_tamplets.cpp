#include<iostream>
using namespace std;
template <class t>
class temp
{
	private:
		t a,b,temp;
	
 public:
 void get() 
	{
	 cout<<"enter two numbers"<<endl;
	 cin>>a>>b;	
	}
  void swap()
  {
  	temp=a;
  	a=b;
  	b=temp;
  	cout<<endl<<"swap is done :)"<<endl;
  }
  void show()
  {
  	cout<<"a="<<a<<" b="<<b;
  }

};
int main()
{  
temp <int>s;
s.get();
s.show();
s.swap();
s.show();
}
/*OUTPUT:-
enter two numbers
15
20
a=15 b=20
swap is done :)
a=20 b=15
*/
