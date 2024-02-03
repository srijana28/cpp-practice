#include<iostream>
using namespace std;
template<class T1>
void display(T1 x)
{
	cout<<"Execution of tempate function with one argument\n";
}
template<class T1,class T2,class T3>
void display(T1 a,T2 b,T3 c)//overloading display function with different no of arguments
{
	cout<<"execution of the template function with multiple arguments\n";
}
void display(int n)
{
	cout<<"execution of the non template function with int argument\n";
}
void display(char c)
{
	cout<<"execution of the non template function with char argument\n";
}
int main()
{
	double d=6.6;
	display(d);
	display('a',7,3.4);
	display(4);
	display('w');
	display<int>(5);//forceful calling of template function
	
}

