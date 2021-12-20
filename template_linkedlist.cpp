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
public:
    linked(){
    start==NULL;
    }
    void insert( t ele )
    {
    node<t> *newnode=new node<t>;
    node<t> *ptr=new node<t>;
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
        while (ptr!=NULL )
            {
            cout<<ptr->data<< "->";
            ptr=ptr->next;
            }
     }
};
int main()
{
linked <int>l;
l.insert(2);
l.insert(8);
l.insert(6);
l.display();
l.del();
l.display();
}
