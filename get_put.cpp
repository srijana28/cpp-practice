#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
int main()
{
	char s[40];
	cout<<"enter the string:";
	gets(s);
	int length=strlen(s);
	fstream obj;
	obj.open("new.txt",ios::out);
	for(int i=0;i<length;i++)
	{
		obj.put(s[i]);//to write one character
	}
	obj.seekp(0);
	cout<<endl<<obj.tellp()<<endl;
	obj.close();
	obj.open("new.txt",ios::in);
	char ch;
	while(obj.eof()==0)
	{
		ch=obj.get();//to read one character
		cout<<ch;
		
	}
//	cout<<endl<<obj.tellp();
	obj.close();
}
