#include<iostream>
using namespace std;
class student
{
protected:
	string name;
	int pin;
		void get()
		{
		cout<<"enter student name and pin"<<endl;
		cin>>name>>pin; 
		}
};
class marks:public student
{
protected:
	int mark;
		void getm()
		{   get();
			cout<<"enter marks "<<endl;
			cin>>mark;
		}
		
};
class attendence 
{
protected:
		int att;
		void geta()
		{
			cout<<"enter attendence"<<endl;
			cin>>att;
		}
		
};
class result:public marks,public attendence
{
public:
	
	void final()
	{
	getm();
	geta();
	if(mark<=70||att<=80)
	{
		cout<<"fail"<<endl;
		
	}
	else
	{
		 cout<<"pass"<<endl;
	}
}
};

int main()
{
    result r;
    r.final();
	return 0;
}
