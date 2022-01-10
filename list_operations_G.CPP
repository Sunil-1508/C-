#include<iostream>
#include<list>
using namespace std;
void show(list<int>&num)
{
    list<int>::iterator n;
    for(n=num.begin();n!=num.end();++n)
    {
        cout<<*n<<" ";
    }
}
int main()
{
    list<int>list;
    int i,num,k;
	cout<<"enter the no.of ele in list"<<endl;
	cin>>num;
	cout<<"enter the elements in list"<<endl;
	for(i=0;i<num;i++)
	{ 	cin>>k;
		list.push_back(k);
	}
    cout<<"\n Numbers are:" ;
    show(list);
    cout<<"\n Insert elements at the beginning of list";
    cin>>k;
    list.push_front(k);
    cout<<"\n After inserting elements are:";
    show(list);
    cout<<"\n Delete elements at the beginning"<<endl;
    k=list.front();
    list.pop_front();
    cout<<"ele deleted is "<<k;
    cout<<"\n Numbers are: ";
    show(list);
    cout<<"\n Delete least element"<<endl;
    k=list.back();
    list.pop_back();
    cout<<"ele deleted is "<<k;
    cout<<"\n Numbers are: ";
    show(list);
    cout<<"\n Elements in reverse order:";
    list.reverse();
    show(list);
    return 0;
}

/*OUTPUT:

Numbers are: 5 10           15           20
Insert elements at the beginning of list
After inserting elements are:
25           5              10           15           20
Delete elements at beginning of list
Numbers are: 5 10           15           20
Delete least element
Numbers are: 5 10           15
Elements in reverse order: 15     10           5*/
