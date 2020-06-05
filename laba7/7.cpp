#include <iostream>
#include <cstdlib>

using namespace std;

class fraction {
private:
	int a;
	int b;
public:
	void getfraction() {
		cout << "Enter fraction (a/b): ";
		string f; cin >> f;
		int k = f.find('/');
		a = atoi(f.substr(0, k).c_str());
		f.erase(0, k + 1);
		b = atoi(f.c_str());
	}
	void putfraction() {
		cout << a << '/' << b;
	}
	fraction operator+ (fraction n2) {
		fraction n1;
		n1.a = a * n2.b + n2.a * b;
		n1.b = b * n2.b;
		return n1;
	}
	fraction operator* (fraction n2) {
		fraction n1;
		n1.a = (a * n2.a);
		n1.b = (b * n2.b);
		return n1;
	}
	fraction operator/ (fraction n2) {
		fraction n1;
		n1.a = (a * n2.b);
		n1.b = (b * n2.a);
		return n1;
	}
	fraction operator- (fraction n2) {
		fraction n1;
		n1.a = (a * n2.b - b * n2.a);
		n1.b = (b * n2.b);
		return n1;
	}
	bool operator== (string f) {
		fraction n;
		int k = f.find('/');
		n.a = atoi(f.substr(0, k).c_str());
		f.erase(0, k + 1);
		n.b = atoi(f.c_str());
		if (n.a == a && n.b == b) return true;
		else return false;
	}
	void lowterms() {
		long tnum, tden, temp, gcd;
		tnum = labs(a);
		tden = labs(b);
		if (tden == 0) {
			exit(1);
		}
		else if (tnum == 0) {
			a = 0;
			b = 1;
			return;
		}

		while (tnum != 0) {
			if (tnum < tden) {
				temp = tnum;
				tnum = tden;
				tden = temp;
			}
			tnum = tnum - tden;
		}
		gcd = tden;
		a = a / gcd;
		b = b / gcd;
	}
};
int main() {
	do {
		fraction n1, n2, ns;
		n1.getfraction();
		if (n1 == "0/1") exit(1);
		cout << "Enter operator: (+, -, *, /) ";
		char oper; cin >> oper;
		n2.getfraction();
		if (n2 == "0/1") exit(1);
		switch (oper)
		{
		case '+': ns = n1 + n2;
			break;
		case '-': ns = n1 - n2;
			break;
		case '*': ns = n1 * n2;
			break;
		case '/': ns = n1 / n2;
			break;
		default: break;
		}
		ns.lowterms();
		cout << "\nAnswer: "; ns.putfraction();
		cout << endl << endl;
	} while(1==1);
	return 0;
}

