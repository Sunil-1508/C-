#include<iostream>
#include<cstring>
using namespace std;
template <class t>
class temp
{
	private:
		t a,b;
	
 public:
 void get() 
	{
	 cin>>a>>b;	
	}
  void add()
  {
  	cout<<endl<<a+b<<endl;
  }
};
int main()
{  

temp <string>s;
cout<<"enter two strings"<<endl;
s.get();
s.add();
temp <int>s1;
cout<<"enter two integers"<<endl;
s1.get();
s1.add();
}
/*OUTPUT:-
enter two strings
aditya
college
adityacollege
enter two integers
10
5
15


*/
