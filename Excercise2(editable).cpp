#include <iostream>
using namespace std;

int main()
{
	//local variables
	int x=0, y=0, average=0, sum=0, difference=0, product=0, quotient=0, remainder=0;
	
	cout<<"The Value of X is :";
	cin>>x;
	cout<<"The Value of Y is :";
	cin>>y;
	
	cout<<""<<endl;
	
	average=(x+y)/2;
    sum=(x+y);
  	difference=(x-y);
  	product=(x*y);
    quotient=(x/y);
    remainder=(x%y);
		
	cout<<"the varriable average is "<<average<<endl;
	cout<<"the varriable sum is "<<sum<<endl;
	cout<<"the varriable difference is "<<difference<<endl;
	cout<<"the varriable product is "<<product<<endl;
  	cout<<"the varriable quotient is "<<quotient<<endl;
  	cout<<"the variable remainder is "<<remainder<<endl;
	
	return 0;
}
