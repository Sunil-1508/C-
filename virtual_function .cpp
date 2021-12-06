#include<iostream>
using namespace std;
class sample1
{
public:
    virtual void sample()
    {
        cout<< "x invoked"<<endl;
    }
};
class sample2:public sample1
{
public:
    void sample()
    {
        cout<< "y invoked"<<endl;
    }
};
class sample3:public sample1
{
public:
    void sample()
    {
        cout<< "z invoked"<<endl;
    }
};
int main()
{
    sample1 s,*spts;
    sample2 r;
    sample3 p;
    s.sample();
    spts=&r;
    spts->sample();
    spts=&p;
    spts->sample();
    return 0;
}
/* 
OUTPUT:-
x invoked
y invoked
z invoked
*/