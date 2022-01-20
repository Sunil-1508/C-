#include<iostream>
#include<string.h>
using namespace std;
class employe
{ 

protected:
	int id;
string name;
void get()
 { 
   
   cout<<"enter the name and I'd of employe";
    cout<<endl;
    cin>>name>>id;
    }
void show()
                                                                                                                               
	 	{ cout<<"name="<<name;
cout<<endl;
    cout<<"I'd="<<id;
    }
	 


};
class daily:public employe
{
public:
int wh,n;
	 void geta()
	 { 
get();

	 	cout<<"enter no.of hr works ,wages per hr& "<<endl;

cin>>n>>wh;
}
		void showa()
		{ 

geta();
show();
cout<<endl;
 		cout<<"salary="<<n*wh<<endl;
}
};
class permanent: public employe
{
public:
		int d,wd;
	 void getb()
	 { 

 get();

	 	cout<<"enter no.of days works ,wages per day& "<<endl;
cin>>d>>wd;
}
		void showb()
		{ 
  getb();
show();
 		cout<<endl<<"salary="<<d*wd<<endl;
}
};


int main()
{
	daily d;
	permanent p;
	d.showa();
	p.showb();
	
	return 0;
}
