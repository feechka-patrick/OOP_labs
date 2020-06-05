#include <iostream>
using namespace std;
double power(double n, int p=2);
int main()
		{
		double number,answer;
		int pow;
		char yeserno;
		cout <<"\nEnter number:";
		cin >>number;
		cout <<"Enter power? (y/n)?";
		cin >>yeserno;
		if (yeserno =='y')
			{
			cout <<"Power:";
			cin >> pow;
			answer=power(number,pow);
			}
		else
			answer = power(number);
		cout <<"Answer: " <<answer <<endl;
		return 0;
		}

double power(double n,int p )
		{
		double result =1.0;
		for(int j=0;j<p;j++)
		result *=n;
		return result;
		}
