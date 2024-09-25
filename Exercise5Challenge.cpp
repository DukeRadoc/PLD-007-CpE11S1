#include<iostream>
using namespace std;

int main()
{
	int num1=0,num2=0;
	char op;
	
	cout<<"+ : Addition | - : Subtraction | x : Multiplication | % : Division"<<endl;
	cout<<"Operator :";
	cin>>op;
	cout<<"First Number :";
	cin>>num1;
	cout<<"Second Number :";
	cin>>num2;
	
	switch(op)
	{
	case'+':
		cout<<"Sum :"<<(num1+num2);
	break;
	case'-':
		cout<<"Difference :"<<(num1-num2);
	break;
	case'x':
		cout<<"Product :"<<(num1*num2);
	break;
	case'%':
		cout<<"Quotient :"<<(num1/num2);
	break;
	}
	
	return 0;
}
