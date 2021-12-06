//develop a cpp program to illustrate object as a class member.
#include<iostream>
using namespace std;
class DOB
{
	private:
		int DD,MM,YYYY;
	public:
			void get()
			{
				cout<<"enter day,month,year"<<endl;
				cin>>DD>>MM>>YYYY;	
			}
			void show()
			{
					cout<<"DOB="<< DD<<"-"<<MM<<"-"<<YYYY<<endl;
			}
};
class student
{
	private:
		string name;
		int roll_no;
		DOB d;
	public:
		void display()
		{
			cout<<"enter name & roll_no"<<endl;
			cin>>name>>roll_no;
			d.get();
			cout<<endl<<"------student details are-------"<<endl;
			cout<<"name="<<name<<endl<<"roll_no="<<roll_no<<endl;
			d.show();
			
		}
};
int main()
{
	student s;
	s.display();
	return 0;
}
