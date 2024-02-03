#include<iostream>
using namespace std;
class binary
{
	public:
		void binarysearch(int arr[100],int search,int n)
		{
		int lb=0,ub,mid;
		ub=n-1;
	while(lb<ub)
	{
		mid=(lb+ub)/2;
		if(arr[mid]==search)
		{
		cout<<"element "<<search<<" found at index "<<mid;
		break;
	}
		else if(search<arr[mid])
		ub=mid-1;
		else
		lb=mid+1;
	}
		
		}
};
int main()
{
	int arr[100];
	int n,search,i,lb=0,ub,mid;
	cout<<"enter the size of the array:";
	cin>>n;
	for( i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"\nenter the element to be searched:";
	cin>>search;
	/*ub=n-1;
	while(lb<ub)
	{
		mid=(lb+ub)/2;
		if(arr[mid]==search)
		{
		cout<<"element "<<search<<" found at index "<<mid;
		break;
	}
		else if(search<arr[mid])
		ub=mid-1;
		else
		lb=mid+1;
	}*/
	binary obj;
	obj.binarysearch(arr,search,n);
	
}
