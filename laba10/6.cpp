#include <iostream>
#include <string>
using namespace std;
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
	friend bMoney operator * (long double, bMoney);
	friend bMoney operator / (long double, bMoney);
};

bMoney operator * (long double number, bMoney mon){
	bMoney ns;
	ns.money = mon.money * number;
	return ns;
}
bMoney operator / (long double number, bMoney mon) {
	bMoney ns;
	ns.money = number / mon.money;
	return ns;
}

int main()
{
	bMoney n1, n2, ns;
	long double n;
	n1.getmoney();
	n2.getmoney();
	cout << "Enter number: "; cin >> n;

	n1.putmoney(); cout << " + ";
	n2.putmoney(); cout << " = ";
	ns = n1 + n2; ns.putmoney();
	cout << endl << endl;

	n1.putmoney(); cout << " - ";
	n2.putmoney(); cout << " = ";
	ns = n1 - n2; ns.putmoney();
	cout << endl << endl;

	long double k;
	n1.putmoney(); cout << " / ";
	n2.putmoney(); cout << " = ";
	k = n1 / n2; cout << k;
	cout << endl << endl;

	n1.putmoney(); cout << " / ";
	cout << n << " = ";
	ns = n1 / n; ns.putmoney();
	cout << endl << endl;

	n2.putmoney(); cout << " * ";
	cout << n << " = ";
	ns = n2 * n; ns.putmoney();
	cout << endl << endl;

	cout << n << " * "; n1.putmoney();
	cout << " = ";
	ns = n * n1; ns.putmoney();
	cout << endl << endl;

	cout << n << " / "; n2.putmoney();
	cout << " = ";
	ns = n / n2; ns.putmoney();
	cout << endl << endl;
}

