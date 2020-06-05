#include <iostream>
#include <string>
#include <cstdlib>
struct date{
	int day;
	int month;
	int year;
};
using namespace std;
int main(){
	cout << "Enter data (DD/MM/YYYY) : ";
	string dat1; cin >> dat1;
	string d = dat1.substr(0, 2), m = dat1.substr(3, 2), y=dat1.substr(6, 4);
	date data = { atoi(d.c_str()), atoi(m.c_str()), atoi(y.c_str()) };
	
	cout << "Data: " << data.day <<"/"<< data.month <<"/"<< data.year;
}
