#include <iostream>
#include <cstdlib>
using namespace std;

enum etype{laborer = 'l', secretary = 's', manager = 'm', accountant = 'a', executive = 'e', researcher = 'r'};

class date{
	private:
		int day;
		int month;
		int year;
	public:
		void getdate(){
	cout << "Enter data (DD/MM/YYYY) : ";
	string dat1; cin >> dat1;
	string d = dat1.substr(0, 2), m = dat1.substr(3, 2), y = dat1.substr(6, 4);
	day = atoi(d.c_str());
	month = atoi(m.c_str());
	year = atoi(y.c_str());
		}
		void showdate(){
	cout << "\nData: " << day <<"/"<< month <<"/"<< year;
		}
};

class employee{
	private:
		int number;
		float benefit;
		date data;
		etype post;
	public:
		void getemploy(){
	cout << "\nEnter data about employee ";
	cout << "\nEmployee number: "; cin >> number;
	cout << "Enter the amount of benefits: "; cin >> benefit;
	cout << "Enter the first letter of the post: ";
	char p; cin >> p; 
	switch(p) {
		case(laborer): post = laborer; break;
		case(secretary): post = secretary; break;
		case(manager): post = manager; break;
		case(accountant): post = accountant; break;
		case(executive): post = executive; break;
		case(researcher): post = researcher; break;
		default: break;
	}
	data.getdate();
		}
		
		void putemploy(){
		cout <<"\n\nEmployee number: " << number;
		cout <<"\nBenefit: " << benefit;
		cout <<"\nPost: ";
		switch(post) {
		case(laborer): cout << "laborer"; break;
		case(secretary): cout << "secretary"; break;
		case(manager): cout << "manager"; break;
		case(accountant): cout << "accountant"; break;
		case(executive): cout << "nexecutive"; break;
		case(researcher): cout << "researcher"; break;
		default: break;
	}
		data.showdate();
		}
};

int main(){
	employee e1, e2, e3;
	e1.getemploy();
	e2.getemploy();
	e3.getemploy();
	e1.putemploy();
	e2.putemploy();
	e3.putemploy();
}
