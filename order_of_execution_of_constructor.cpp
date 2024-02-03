#include<iostream>
using namespace std;
class A
{
int x;
public:
A(int a)
{
    x=a;
    cout<<"\nCalling base class parameterized "<<x;
}
~A()
{
cout<<"\nCalling base class destructor";
}
};
class B:public A
{
int l;
public:
B(int p):A(2)
{
l=p;
cout<<"\nCalling derived class parameterized:"<<l;
}
~B()
{
cout<<"\nCalling derived class destructor";
}
};
int main()
{
B obj2(1);
return 0;
}
