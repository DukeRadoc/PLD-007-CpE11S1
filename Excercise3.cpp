#include <iostream>
using namespace std;

int main()
{
//Declaring Values		
		int grade=0;

//inputting of Values
		cout<<"Input Grade :";
		cin>>grade;
		
//Evaluation of grade
		if((grade>=94)&&(grade<=100))
			{cout<<"Excellent | 1.00";}
		else if((grade>=88.5)&&(grade<=93.99))
			{cout<<"Superior | 1.25";}
		else if((grade>=83)&&(grade<=88.49))
			{cout<<"Meritorious | 1.50";}
		else if((grade>=77.5)&&(grade<=82.99))
			{cout<<"Very Good | 1.75";}
		else if((grade>=72)&&(grade<=77.49))
			{cout<<"Good | 2.00";}
		else if((grade>=65.5)&&(grade<=71.99))
			{cout<<"Very Satisfactory | 2.25";}
		else if((grade>=61)&&(grade<=65.49))
			{cout<<"Satisfactory | 2.50";}
		else if((grade>=55.5)&&(grade<=60.99))
			{cout<<"Fair | 2.75";}
		else if((grade>=50)&&(grade<=55.49))
			{cout<<"Passing | 3.00";}
		else
			{cout<<"Failed";}
			
//program end	
	return 0;
}
