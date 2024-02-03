#include<iostream>
using namespace std;
void printarray(int arr[100][100],int r,int c)
{
cout<<"the matrix:\n";
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}	
}
int main()
{
	int arr[100][100],arr1[100][100],arr2[100][100];
	int r,c;
	cout<<"enter the no of rows:";
	cin>>r;
	cout<<"enter the no of columns:";
	cin>>c;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cout<<"arr["<<i<<"]["<<j<<"] = ";
			cin>>arr[i][j];
			cout<<"arr1["<<i<<"]["<<j<<"] = ";
			cin>>arr1[i][j];
		}
	}
	printarray(arr,r,c);
	printarray(arr1,r,c);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			arr2[i][j]=arr[i][j]+arr1[i][j];
		}
	}
	cout<<"sum of arr and arr2:\n";
	printarray(arr2,r,c);
	
}
