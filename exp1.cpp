#include<bits/stdc++.h>
using namespace std;

class Calculator
{
	double a;
	double b;
	int choice , start;
	
	double add(double a , double b)
	{
		return a+b;
	}
	
	double subtract(double a , double b)
	{
		return a-b;
	}
	
	double multiply(double a , double b)
	{
		return a*b;
	}
	double divide(double a , double b)
	{
		if (int(b))
		{
			return a/b;
		}
		return 0;
	}
	
	public:
		Calculator()
		{
			a=b=0;
			choice=0;
			start=1;
		}
		
	void calculate()
	{
		int isfinish = 1;
		int con=0;
		while (isfinish)
		{
			if (choice)
			{
				cout<<"Want to continue with previous answer?    1.Yes   0.No"<<endl<<"Enter your reply;";
				cin>>con;
				cout<<endl;
			}
		
		cout<<"1.Add   2.Subtract   3.Multiply   4.Divide   5.End"<<endl<<"Enter your choice:"<<endl;
		cin>>choice;
		cout<<endl;
		
		cout<<"Enter a number:";
		cin>>a;
		
		if(!con && !start)
		{
			cout<<endl;
			cout<<"\tEnter another number:";
			cin>>b;
		}
		
		if (start)
		{
			cout<<endl;
			cout<<"/t Enter another number:";
			cin>>b;
			start=0;
		}
		
		cout<<b<<endl;
		switch(choice)
		{
			case 1:b=add(a,b);break;
			case 2:b=subtract(a,b);break;
			case 3:b=multiply(a,b);break;
			case 4:b=divide(a,b);break;
			case 5:isfinish=0;break;
		}
		cout<<b<<endl;
	}
    }
};


			 
		
int main()
{
	Calculator c;
	c.calculate();
	return 0;
}
