//predefined functions 
//1)push_back()
//2)erase(begin,last)
//3)pop_back()
//4)begin() returns the first address
//5)end()  returns last address

#include<iostream>
#include<vector>

using namespace std;
int main()
{
	vector<int> v1(10);
	cout<<"size is\t"<<v1.size()<<"\n";
	for(int i=0;i<=9;i++)
	{
		v1[i]=i;
	}
	for(int i=10;i<=19;i++)
	{
		v1.push_back(i);
	//	v1.push_front(i);  it is not posssible in vector as it works as a stack
	}
	cout<<"size is\t"<<v1.size()<<"\n";
	for(int i=0;i<=19;i++)
	{
		cout<<v1[i]<<" ";
	}
	v1.pop_back();
	v1.pop_back();//predefined function to delete last
	cout<<"\n New size of the vector :"<<v1.size();
	vector<int>::iterator v=v1.begin();
	while(v!=v1.end())
	{
		cout<<"\n value="<<*v;
		v++;
	}
	vector<int>::iterator i=v1.begin();
	i=i+3;
	v1.insert(i,100);//it does not overwrite on 3 but shifts every element and inserts 100
	cout<<"after insertion\n";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	v1.erase(i+3,i+5);//includes first index but excludes the second or last index
	cout<<"content after deletion\n";
	for(int i=0;i<v1.size();i++)
	{
		cout<<v1[i]<<" ";
	}
	
}
