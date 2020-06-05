#include <iostream>

struct date{
	int day;
	int month;
	int year;
};
struct employee{
	int number;
	float benefit;
	char s;
	date data;
};
enum etype{laborer = 'l', secretary = 's', manager = 'm', accountant = 'a', executive = 'e', researcher = 'r'};

using namespace std;
int main(){
	employee e1,e2,e3;
	cout << "Enter data about first employee ";
	cout << "\nEmployee number: "; cin >> e1.number;
	cout << "Enter the amount of benefits: "; cin >> e1.benefit;
	cout << "Enter data\nYear: "; cin >> e1.data.year;
	cout << "Day: "; cin >> e1.data.day;
	cout << "Month: "; cin >> e1.data.month;
	
	cout << "\nEnter data about second employee ";
	cout << "\nEmployee number: "; cin >> e2.number;
	cout << "Enter the amount of benefits: "; cin >> e2.benefit;
	cout << "Enter data\nYear: "; cin >> e2.data.year;
	cout << "Day: "; cin >> e2.data.day;
	cout << "Month: "; cin >> e2.data.month;
	
	cout << "\nEnter data about thirth employee ";
	cout << "\nEmployee number: "; cin >> e3.number;
	cout << "Enter the amount of benefits: "; cin >> e3.benefit;
	cout << "Enter data\nYear: "; cin >> e3.data.year;
	cout << "Day: "; cin >> e3.data.day;
	cout << "Month: "; cin >> e3.data.month;
	
	cout << "\nDisplay employee data? yes / no : ";
	string ans; cin >> ans;
	
	if (ans == "yes"){
		cout <<"\nEmployee number: " << e1.number;
		cout <<"\nBenefit: " << e1.benefit;
		cout <<"\nDate: "<< e1.data.day <<"/"<<e1.data.month <<"/"<<e1.data.year;
		cout <<"\nEmployee number: " << e2.number;
		cout <<"\nBenefit: " << e2.benefit;
		cout <<"\nDate: "<< e2.data.day <<"/"<<e2.data.month <<"/"<<e2.data.year;
		cout <<"\nEmployee number: " << e3.number;
		cout <<"\nBenefit: " << e3.benefit;
		cout <<"\nDate: "<< e3.data.day <<"/"<<e3.data.month <<"/"<<e3.data.year;
	}
	return 0;
}
