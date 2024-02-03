#include<iostream>
using namespace std;
class Linear
{
	public:
		void linearsearch(int arr[100],int n,int search)
		{
			for(int i=0;i<n;i++)
				{
					if(arr[i]==search)
					cout<<"element "<<search<<" found at index "<<i;
				}
			
		}
};
int main()
{
	int arr[100];
	int n,search,i;
	Linear obj;
	cout<<"enter the size of the array:";
	cin>>n;
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nenter the element to be searched:";
	cin>>search;
	/*
	for(i=0;i<n;i++)
	{
		if(arr[i]==search)
		cout<<"element "<<search<<" found at index "<<i;
	}*/
	obj.linearsearch(arr,n,search);
}
