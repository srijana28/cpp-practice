#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	double *arr,*sum;
	double *search;
	int size;
	sum=new double;
	search=new double;
	cout<<"enter the size of array:";
	cin>>size;
	cout<<"\ncreating an array of size "<<size;
	arr=new double[size];
	if(arr==NULL||sum==NULL)
	{
		cout<<"memory allocation failed";
		exit(1);
	}
	cout<<"\nenter the array elements\n";
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter the element to be searched:";
	cin>>*search;
	int flag=0;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==*search)
		flag++;
	}
	if(flag==0)
	cout<<"element not found\n";
	else
	cout<<"element found\n";

	for(int i=0;i<size;i++)
	{
		*sum=(*sum)+arr[i];
	}
	
	cout<<"Sum="<<*sum;
	
	delete []arr;
	delete sum;
	delete search;
	cout<<"\nmemory deallocated";
	return 0;
}
