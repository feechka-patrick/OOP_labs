#include <iostream>
using namespace std;
int main()
{
	cout << "Enter the initial deposit: ";
	float dep;
	cin >>dep;
	cout << "The amount of money you want to receive ";
	int amount;
	cin >>amount;
	cout << "Enter the interest rate: ";
	float rate;
	cin >> rate; 
	rate = 1 + rate/100;
	int years = 0;
	
	while (dep < amount){
		dep *= rate;
		years ++;
	}
	cout << "After "<< years <<" years you will get "<< dep <<" dollars";
	
}
