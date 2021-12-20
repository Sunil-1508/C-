#include<iostream>
using namespace std;
template <class t1,class  t2>
class temp
{
 public:
 void sample(	t1 a,t2 b)
	{ 
	
		cout<<"sum of two numbers = "<<a+b<<endl;
	}

template <typename t>
t sample2(t a,t b)
	{
	return a+b;
	}
};
int main()
{  	temp <int,int>s1;
	temp <float,int>s2;
	temp <float,float>s3;
 	s1.sample(10,20);
	s2.sample(1.5,3);
	cout<<"sum="<<s3.sample2(1.2,6.8);
}
/* OUTPUT:-
sum of two numbers = 30
sum of two numbers = 4.5
sum=8
*/
