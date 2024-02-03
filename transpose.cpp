#include<iostream>
using namespace std;
class Array
{
	int arr[100][100],arr1[100][100];
	int r,c;
	public:
		void input()
		{
			cout<<"enter the no. of rows:";
			cin>>r;
			cout<<"enter the no. of columns:";
			cin>>c;
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<"arr["<<i<<"]["<<j<<"] = ";
					cin>>arr[i][j];
				}
			}
		}
		void transpose()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					arr1[i][j]=arr[j][i];
				}
			}
			
		}
		void printtranspose()
		{
			
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<arr1[i][j]<<" ";
				}
				cout<<endl;
			}	
		}
		void printarray()
		{
			
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					cout<<arr[i][j]<<" ";
				}
				cout<<endl;
			}	
		}
		void diagonal()
		{
			for(int i=0;i<r;i++)
			{
				for(int j=0;j<c;j++)
				{
					if(i==j)
					cout<<arr[i][j]<<" ";
				}
			}
		}
};
int main()
{
	Array obj;
	obj.input();
	obj.transpose();
	cout<<"\nOrginal matrix is:\n";
	obj.printarray();
	cout<<"\nTranspose of matrix is:\n";
	obj.printtranspose();
	cout<<"\nDiagonal elements:\n";
	obj.diagonal();
}
