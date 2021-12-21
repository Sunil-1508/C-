#include<iostream>
using namespace std;
#include "node.h"
/*template < class t >
class node
    {
    public:
    t data;
    node<t> *next;
    };*/
template < class t >
class linked
{
private:
    node<t> *start;
    t ele;
public:
    linked(){
    start=NULL;
    }
    void insert( )
    {
    node<t> *newnode=new node<t>;
    node<t> *ptr=new node<t>;
    cout<<"enter the ele"<<endl;
    cin>>ele;
    newnode->data=ele;
    newnode->next=NULL;
      if(start==NULL )
        start=newnode;
      else{
        ptr=start;
        while (ptr->next!=NULL )
        ptr=ptr->next;
      ptr->next=newnode;
        }
    }
    void del()
    {
        node<t> *preptr=new node<t>;
        node<t> *ptr=new node<t>;
        ptr=start;
    while(ptr->next!=NULL )
        {
        preptr=ptr;
        ptr=ptr->next;
        }
        preptr->next=NULL;
        cout<< "deleted ele is "<<ptr->data<<endl;
        delete ptr;
    }
    void display()
    {
        node<t> *ptr=new node<t>;
        ptr=start;
        cout<<"elements in linked list are: ";
        while (ptr!=NULL )
            {
            cout<<ptr->data<< " ";
            ptr=ptr->next;
            }
     }
};
int main()
{
linked <int>l;
int c;

do
	{
		printf("\n enter your choise :\n 1) insert \n 2) display\n 3) delete \n 4)  exit \n");
		scanf("%d",&c);
		 switch(c)
		 { 
		   case 1 : 	l.insert();
					break;
		   case 2 : 	l.display();
		   			break;
		   case 3 : 	l.del();
		      		break;
		   
		   case 4 : exit(1);
		            break;
		 }
	}while(c!=4);
}
/* OUTPUT:-
enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
1
enter the ele
2

 enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
1
enter the ele
3

 enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
1
enter the ele
4

 enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
2
elements in linked list are: 2 3 4
 enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
3
deleted ele is 4

 enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
2
elements in linked list are: 2 3
 enter your choise :
 1) insert
 2) display
 3) delete
 4)  exit
4*/
