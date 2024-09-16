#include <iostream>
using namespace std;

int main()
{
	int i=0;

cout<<"Integers Less Than 10 but Not Less Than 3 : "<<endl;
i = 3;
	do
	{
		cout<<"Integer Value is now "<<i<<endl;
		i++;
	}
	while(i>3 && i<10);
	
cout<<""<<endl;
	
cout<<"Integers Less Than 10 but More Than 3"<<endl;
i=4;
	do
	{
		cout<<"Integer Value is now "<<i<<endl;
		i++;
	}
	while(i>3 && i<10);
	
return 0;
}
