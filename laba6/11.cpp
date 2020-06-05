#include <iostream>
#include <string>
using namespace std;

class bMoney {
private:
	long double money;
	string m;
public:
	void ldtoms() { //double -> string
		cout << "Enter number: ";
		cin >> money;
		if (money < 9999999999999990.00) {
			m = to_string(money);
			int i = m.size() - 1;
			if (m.find('.')) i = m.find('.');
			for (i = i - 3; i > 0; i -= 3)
				m.insert(i, ",");
			m = "$" + m;
			cout << m << endl;
		}
		else cout << "The number is too large\n";
	}
};

int main()
{
	bMoney n1, n2, n3;
	n1.ldtoms();
	n2.ldtoms();
	n3.ldtoms();
}
