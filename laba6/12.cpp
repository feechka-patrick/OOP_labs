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
	void mstold() { //string -> double
		m.erase(m.begin());
		int i = 0, n = m.size();
		while (i < n) {
			if (m[i] == ',') m.erase(m.begin()+i, m.begin() + i + 1);
			else i++;
		}
		money = stold(m.c_str());
	}
	void madd(bMoney m1, bMoney m2) {
		money = m1.money + m2.money;
	}
	void getmoney() {
		cout << "Enter number: ";
		cin >> m;
	}
	void putmoney() {
		cout << m;
	}
};
int main()
{
	bMoney n1, n2, n3, ns;
	n1.getmoney();
	n1.mstold();
	n2.getmoney();
	n2.mstold();
	n3.getmoney();
	n3.mstold();
	ns.madd(ns, n1);
	ns.madd(ns, n2);
	ns.madd(ns, n3);
	ns.ldtoms();
	ns.putmoney();
}
