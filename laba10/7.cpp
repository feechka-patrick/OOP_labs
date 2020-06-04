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
	bMoney(long double k) {
		money = k;
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
		cout << "\nEnter money: ";
		cin >> money;
	}
	void putmoney() {
		ldtoms();
		cout << m;
	}
	friend bMoney round_money(bMoney ex);
};
bMoney round_money(bMoney ex) {
	return bMoney(round(ex.money));
}

int main()
{
	bMoney example;
	example.getmoney();
	example = round_money(example);
	example.putmoney();

	example.getmoney();
	example = round_money(example);
	example.putmoney();

	return 0;
}

