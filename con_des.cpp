#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
 public:
 	sample(int n)
 	{x=n;
 		cout<<"constructor is invoked with x= "<<x<<endl;
 		
	 }
	~sample()
	{
		cout<<"destructor is invoked with x= "<<x<<endl;
	}
 	
};
int main()
{
	sample s1(1),s2(2),s3(3);
	return 0;
}
