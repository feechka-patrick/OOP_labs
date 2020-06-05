#include <iostream>
#include <cstdlib>
using namespace std;

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
	cout << "Data: " << day <<"/"<< month <<"/"<< year;
		}
};

int main(){
	date data;
	data.getdate();
	data.showdate();
}
