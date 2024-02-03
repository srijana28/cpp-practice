#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	try
	{
		if(a==0)
		throw 'a';
		else if(a==1)
		throw 1;
		else if(a<0)
		throw 1.1;
		else
		cout<<"a="<<a;
	}
	catch(int i)
	{
		cout<<"excetion caught integer found";
	}
	catch(char c)
	{
		cout<<"exception caught character found";
	}
	catch(double d)
	{
		cout<<"exception caught double found";
	}
}
