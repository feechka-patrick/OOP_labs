#include <iostream>
#include <string>
using namespace std;

class sterlings {
private:
	int pounds;
	int shillings;
	int pence;
public:
	sterlings() {
		pounds = 0;
		shillings = 0;
		pence = 0;
	}
	sterlings(int sum) {
		pounds = sum / 240;
		shillings = sum % 240 / 12;
		pence = sum % 240 % 12;
	}
	sterlings(int p, int sh, int pc) {
		pounds = p;
		shillings = sh;
		pence = pc;
	}
	void getSterLing() {
		string str;
		cout << "Enter sum: ";
		cin >> str;
		str.erase(str.begin());
		int p = str.find('.');
		pounds = atoi(str.substr(0, p).c_str());
		str.erase(0, p + 1);
		p = str.find('.');
		shillings = atoi(str.substr(0, p).c_str());
		str.erase(0, p + 1);
		pence = atoi(str.c_str());
	}
	void putSterling() {
		cout << "?" << pounds << "." << shillings << "." << pence;
	}
	
};
class bMoney {
private:
	long double money;
	string m;
public:
	bMoney() {
		money = 0;
	}
	void ldtoms() { //double -> string	
		m = to_string(money);
		int i = m.size() - 1;
		if (m.find('.')) i = m.find('.');
		for (i = i - 3; i > 0; i -= 3)
			m.insert(i, ",");
		m = "$" + m;
	}
	void getmoney() {
		cout << "Enter money: ";
		cin >> money;
	}
	void putmoney() {
		ldtoms();
		cout << m;
	}
	bMoney operator + (bMoney n) {
		bMoney ns;
		ns.money = money + n.money;
		return ns;
	}
	bMoney operator - (bMoney n) {
		bMoney ns;
		ns.money = money - n.money;
		return ns;
	}
	long double operator / (bMoney n) {
		long double ns;
		ns = money / n.money;
		return ns;
	}
	bMoney operator * (long double n) {
		bMoney ns;
		ns.money = money * n;
		return ns;
	}
	bMoney operator / (long double n) {
		bMoney ns;
		ns.money = money / n;
		return ns;
	}
	long double pm() {
		return money;
	}
	bMoney operator = (sterlings s);
};

bMoney bMoney::operator = (sterlings s) {
	money = s.ster() * 50;
	bMoney k;
	return k;
}

int main() {
	sterlings s1, s2;
	bMoney m1, m2;
	s1.getSterLing();
	cout << " = "; m1 = s1;
	m1.putmoney();
} 

