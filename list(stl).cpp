#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l;
	int i;
	for(i=0;i<=5;i++)
	{
		l.push_back(i);
	
	}

    list<int>::iterator it;
	for(it=l.begin();it!=l.end();++it)
	{
	cout<<*it<<" ";
    }
	cout<<endl;
}
/*
output:
0 1 2 3 4 5
*/
