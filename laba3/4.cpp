#include <iostream>

struct employee{
	int number;
	float benefit;
};
using namespace std;
int main(){
	employee e1,e2,e3;
	cout << "Enter data about first employee ";
	cout << "\nEmployee number: "; cin >> e1.number;
	cout << "Enter the amount of benefits: "; cin >> e1.benefit;
	
	cout << "\nEnter data about second employee ";
	cout << "\nEmployee number: "; cin >> e2.number;
	cout << "Enter the amount of benefits: "; cin >> e2.benefit;
	
	cout << "\nEnter data about thirth employee ";
	cout << "\nEmployee number: "; cin >> e3.number;
	cout << "Enter the amount of benefits: "; cin >> e3.benefit;
	
	cout << "\nDisplay employee data? yes / no : ";
	string ans; cin >> ans;
	
	if (ans == "yes"){
		cout <<"\nEmployee number: " << e1.number;
		cout <<"\nBenefit: " << e1.benefit;
		cout <<"\nEmployee number: " << e2.number;
		cout <<"\nBenefit: " << e2.benefit;
		cout <<"\nEmployee number: " << e3.number;
		cout <<"\nBenefit: " << e3.benefit;
	}
	return 0;
}
