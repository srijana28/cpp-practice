#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"enter the values of a and b ";
	cin>>a;
	cin>>b;
	int x=a-b;
	/*try
	{
		if(x!=0)
		{
			cout<<"Result (a/x)="<<a/x;
		}
		else
		{
		//	throw;//if we do not provide any argument to the throw it terminates the program
		//throw('a');///terminates if the data of throw and catch doesn't matches
		throw(x);
		}
	}
	catch(int i)
	{
		cout<<"excetion caught:x="<<i<<endl;
	}*/
	try
	{
		if(x!=0)
		{
			cout<<"Result (a/x)="<<a/x;
		}
		else
		{
		//	throw;//if we do not provide any argument to the throw it terminates the program
		//throw('a');///terminates if the data of throw and catch doesn't matches
		//throw(x);//if no throw then it doesnt give exception
		}
	}
	catch(int i)
	{
		cout<<"excetion caught:x="<<i<<endl;
	}
	cout<<"end";
	return 0;
}
