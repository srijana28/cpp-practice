#include<iostream>
using namespace std;
	void check(int a)
	{
		if(a<10)
		throw(1);
		else if(a>10&&a<20)
		throw('a');
		else if(a>20)
		throw(1.1);
	}
int main()
{
	//int a;
	//cin>>a;
	/*void check(int a)
	{
		if(a<10)
		throw(1);
		else if(a>10&&a<20)
		throw('a');
		else if(a>20)
		throw(1.1);
	}*/
	try
	{
		check(2);
		check(30);
		check(12);
	}
	catch(...)//universal catch
	{
		cout<<"exception caught\n";
	}
}
