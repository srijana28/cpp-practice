#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
	if((x-y)!=0)
	{
		int R=z/(x-y);
		cout<<"Result="<<R<<endl;
	}
	else
	{
		throw(x-y);
	}
}
int main()
{
	try
	{
		cout<<"we are inside try block\n";
		divide(10,10,30);
		divide(10,20,20);//once it goes to catch block it does not go back to try block
		
	}
	catch(int i)
	{
		cout<<"caught an excception";
	}
	return 0;
}
