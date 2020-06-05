#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the initial deposit: ";
	float dep;
	cin >>dep;
	cout << "Enter the number of years: ";
	int years;
	cin >>years;
	cout << "Enter the interest rate: ";
	float rate;
	cin >> rate; 
	rate = 1 + rate/100;
	
	for (int i=0; i<years; i++)
		dep*=rate;
	cout << "In "<< years <<" years you will get "<< dep <<" dollars";
	
}
