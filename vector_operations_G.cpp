#include<iostream>
#include<vector>
using namespace std;
void show(vector<int>&num)
{
    vector<int>::iterator n;
    for(n=num.begin();n!=num.end();++n)
    {
        cout<<*n<<" ";
    }
}
int main()
{
    vector<int>vect;
    int i,num,k;
	cout<<"enter the no.of ele in vect"<<endl;
	cin>>num;
	cout<<"enter the elements in vect"<<endl;
	for(i=0;i<num;i++)
	{ 	cin>>k;
		vect.push_back(k);
	}
    cout<<"\n Numbers are:" ;
    show(vect);
    cout<<"\n After inserting elements are:";
    show(vect);
    cout<<"\n Delete least element"<<endl;
    k=vect.back();
    vect.pop_back();
    cout<<"ele deleted is "<<k;
    cout<<"\n Numbers are: ";
    show(vect);

    return 0;
}

/*OUTPUT:

enter the no.of ele in vect
5
enter the elements in vect
1
2
3
4
5

 Numbers are:1 2 3 4 5
 Delete least element
ele deleted is 5
 Numbers are: 1 2 3 4
 Elements in reverse order:4 3 2 1*/
