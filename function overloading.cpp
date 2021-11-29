#include<iostream>
using namespace std;
class overload
{
public:
void display(int a)
{
cout<<"Integer Value="<<a<<endl;
}
void display(float b)
{
cout<<"Floating point Value="<<b<<endl;
}
void display(double d)
{
cout<<"Double Value="<<d<<endl;
}
void display(char c)
{
cout<<"Character Value="<<c<<endl;
}
void display(string s)
{
cout<<"String Value="<<s<<endl;
}
void display(int x,string y)
{
cout<<"Integer Value="<<x<<endl;
cout<<"String Value="<<y<<endl;
}
};
int main()
{
overload o;
o.display(10);
o.display(2.5f);
o.display(33.567);
o.display('l');
o.display("Akshaya");
o.display(10,"Akash");
}
