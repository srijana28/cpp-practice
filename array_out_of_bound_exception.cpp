#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	cout<<"enter array elements"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}
	//int c=0;
	try
	{
		int c=0;
		while(1){
		
		if(c<5)
		{
			//cin>>arr[c];
			cout<<arr[c]<<endl;
			c++;
		}
		else
		{
			throw(c);
		}}
		
	}
	catch(int x)
	{
		cout<<"array out of bounds"<<x;
		
	}
	return 0;
}
