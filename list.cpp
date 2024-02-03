#include<iostream>
#include<list>
using namespace std;
void display(list<int> &l)
{
	list<int>::iterator p;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<*p<<" ";
	}
}
int main()
{
	list<int>list1;
	list<int> list2(5);
	for(int i=0;i<3;i++)
	{
		list1.push_back(i);
	}
	cout<<"\n Displaying list1:\n";
	display(list1);
	list<int>::iterator p;
	for(p=list2.begin();p!=list2.end();p++)
	{
		*p=1;//inserting elements using pointer
	}
	cout<<"\nDisplaying second list\n";
	display(list2);
	cout<<"pushing element at front:";
	list1.push_front(100);//adds 100 at the beginning
	display(list1);
	cout<<"\ndeleting element from front:";
	list2.pop_front();//deletes first element
	display(list2);
	cout<<"\n Sorting first list:\n";
	list1.sort();//predefined function to sort the list
	display(list1);
	cout<<"\n Merging two lists:\n";
	list1.merge(list2);//sorts and merges two lists and stores in list1 
	display(list1);
	list1.reverse()	;//reverses the elements of the list
	cout<<"\n After reversing the list:\n";
	display(list1);
	
}
