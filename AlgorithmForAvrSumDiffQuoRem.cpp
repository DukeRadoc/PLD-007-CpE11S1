#include <iostream>
using namespace std;

int main()
{
	//local variables
	int x=4, y=2, average=0, sum=0, difference=0, quotient=0, remainder=0;
	
	cout<<"X value is 4"<<endl;
	cout<<"Y value is 2"<<endl;
	
	cout<<""<<endl;
	
	//calculation of average
	average=(x+y)/2;
  	//calculation of sum
    sum=(x+y);
  	//calculation of difference
  	difference=(x-y);
  	//calculation of quotient
    quotient=(x/y);
  	// calculation of remainder
    remainder=(x%y);
		
	//print the results
	cout<<"the input average is "<<average<<endl;
	//print the results
	cout<<"the input sum is "<<sum<<endl;
	//print the results
	cout<<"the input difference is "<<difference<<endl;
 	//print the results
  	cout<<"the input quotient is "<<quotient<<endl;
  	//print the results
  	cout<<"the input remainder is "<<remainder<<endl;
	
	return 0;
}
