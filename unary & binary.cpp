 #include<iostream>
using namespace std;
class sample
{
	private:
		int x;
 public:
 	 sample( )
  {
  	cin>>x;
  }
void operator ++()
{
	x=++x;
	cout<<"x="<<x<<endl;
}
void operator +(sample s2)
{
	
 cout<<x+s2.x<<endl;
}
  
 
 	
};
int main()
{
cout<<"enter the operand of s1 ";
	sample s1;
cout<<"enter the operand of s2 ";
sample s2;
cout<<"incrementing s1 operand using unary operator ++x= ";	
	++s1;
	cout<<"after increment of s1 then addition of s1+s2 is ";
	s1+s2;
	
	return 0;
}
