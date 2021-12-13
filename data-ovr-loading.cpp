#include<iostream>
using namespace std;
class sample
{
	public:
		void date(int dd,int mm,int yy)
		{
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
		void date(int dd,string mm,int yy)
		{
			cout<<dd<<"-"<<mm<<"-"<<yy<<endl;
		}
};
int main()
{
	sample s1;

	s1.date(15,5,2020);
	s1.date(15,"may",2020);
	return 0;
}
