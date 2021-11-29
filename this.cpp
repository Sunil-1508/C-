#include<iostream> 
using namespace std; 
class rectangle 
{ 
private: 
int l,b; 
public: 
rectangle(int l,int b) 
{ 
this->l=l; 
this->b=b; 
} 
void area() 
{ 
cout<<"Area of rectangle = "<<l*b<<endl; 
}
}; 
int main() 
{ 
rectangle r(10,20); r.area(); 
return 0; 
}

