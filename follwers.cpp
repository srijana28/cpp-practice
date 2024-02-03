#include<iostream>
using namespace std;
class profile
{
	public:
	int followers;
	void display()
	{
		if(followers>1000)
		cout<<"Large Following.";
		
		else
		cout<<"Moderate Following.";
	}
};
int main()
{
	profile obj;
	cin>>obj.followers;
	obj.display();
}
