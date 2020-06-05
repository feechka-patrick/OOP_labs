#include <iostream>
using namespace std;
int main()
{
	int n;
	do{
	int number1 = 0, number2 = 0, k;
	cout << "\nEnter the first sum " << endl;
	cout << "Pounds: "; cin >> k;
	number1 = number1 + k*20*12;
	cout << "Shillings: "; cin >> k;
	number1 = number1 + k*12;
	cout << "Pounds: "; cin >> k;
	number1 = number1 + k;
	
	cout << "\nEnter the second sum " << endl;
	cout << "Pounds: "; cin >> k;
	number2 = number2 + k*20*12;
	cout << "Shillings: "; cin >> k;
	number2 = number2 + k*12;
	cout << "Pounds: "; cin >> k;
	number2 = number2 + k;
	
	int ans = number1 + number2;
	cout << "\nSum of numbers: " << ans/240 << "."<< ans%240 /12 <<"." << ans%240 %12 ;
	cout << "\nWant to continue? Yes- 1, No- 0: ";
	cin >> n;
	
	}while(n==1);
	return 0;
}
