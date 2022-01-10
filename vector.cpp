#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v,v2;
	int i;
	for(i=0;i<=5;i++)
	{
		v.push_back(i);
	
	}

	vector<int>::iterator it;
	for(it=v.begin();it!=v.end();++it)
	{
	cout<<*it<<" ";
    }
	cout<<endl;
}
/*
output:
0 1 2 3 4 5
*/
