#include<iostream>
#include<list>
using namespace std;
int main()
{
	list<int>l,l2;
	int i,n;
	cout<<"enter the no.of ele in list"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		l.push_back(i);//push_back(g) – Adds a new element ‘g’ at the end of the list.
	}
    list<int>::iterator it;
	for(it=l.begin();it!=l.end();++it)
	{
		cout<<*it<<" ";
    }
		cout<<endl;
		//front() – Returns the value of the first element in the list.
		cout<<l.front()<<endl;
		//back() – Returns the value of the last element in the list .
		cout<<l.back()<<endl;
		//push_front(g) – Adds a new element ‘g’ at the beginning of the list .
		cout<<l.push_front(100)<<endl;
		//push_back(g) – Adds a new element ‘g’ at the end of the list.
		cout<<l.push_back(50)<<endl;
		//pop_front() – Removes the first element of the list, and reduces size of the list by 1.
		cout<<l.pop_front(200)<<endl;
		//pop_back() – Removes the last element of the list, and reduces size of the list by 1
		cout<<l.pop_back(250)<<endl;
		//size() – Returns the number of elements in the vector.
		cout<<l.size()<<endl;
		//max_size() – Returns the maximum number of elements that the vector can hold.
		cout<<l.max_size()<<endl;
	    //empty() –Returns whether the list is empty(1) or not(0).
		cout<<l2.empty()<<endl<<l.empty()<<endl;
		/*capacity() – Returns the size of the storage space currently allocated to
		 the vector expressed as number of elements.*/
		 	for(it=l.begin();it!=l.end();++it)
	{
		cout<<*it<<" ";
    }
		
}
/*
output:


*/
