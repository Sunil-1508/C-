#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>v,v2;
	int i,n;
	cout<<"enter the no.of ele in list"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
		v.push_back(i);
	}
    vector<int>::iterator it;
	for(it=v.begin();it!=v.end();++it)
	{
		cout<<*it<<" ";
    }
		cout<<endl;
		//size() – Returns the number of elements in the vector.
		cout<<v.size()<<endl;
		//max_size() – Returns the maximum number of elements that the vector can hold.
		cout<<v.max_size()<<endl;
	    //empty() –Returns whether the list is empty(1) or not(0).
		cout<<v2.empty()<<endl<<v.empty()<<endl;
		/*capacity() – Returns the size of the storage space currently allocated to
		 the vector expressed as number of elements.*/
		 cout<<v.capacity()<<endl;
		//resize(n) – Resizes the container so that it contains ‘n’ elements.
	//	cout<<v.resize(10)<<endl;
		/*shrink_to_fit() – Reduces the capacity of the container to fit its size 
		and destroys all elements beyond the capacity.*/
	//	cout<<v.shrink_to_fit()<<endl;
		//reserve() – Requests that the vector capacity be at least enough to contain n elements.
	//	cout<<v.reserve()<<endl;
}
/*
output:
0 1 2 3 4 5



*/
