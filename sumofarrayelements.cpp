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
	int arr[100][100];
	int r,c,sum=0;
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
			sum=sum+arr[i][j];
		}
	}
	cout<<endl;
	printarray(arr,r,c);
	cout<<"\nSum="<<sum;
	
}

	
