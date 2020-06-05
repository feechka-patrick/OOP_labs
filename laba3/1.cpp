#include <iostream>

struct phone{
	int area;
	int exchange;
	int number;
};
using namespace std;
int main(){
	phone ph1;
	cout << "Enter code area, exchange and number: ";
	cin >> ph1.area >> ph1.exchange >> ph1.number;
	phone ph2 = {212, 767, 8900};
	
	cout << "My number: (" << ph2.area <<") "<<ph2.exchange<<"-"<<ph2.number;
	cout << "\nYour number: (" << ph1.area <<") "<<ph1.exchange<<"-"<<ph1.number;
	
}
