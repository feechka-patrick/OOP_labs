#include <iostream>
using namespace std;

class sterlings {
private:
	int pounds;
	int shillings;
	int pence;
public:
	sterlings() {

	}
	sterlings(double k) {
		int sum = k / 2.4;
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
	double ster() {
		return pounds * 240 + shillings * 12 + pence;
	 }
	sterlings operator + (sterlings s) {
		int ns, n1, n2;
		n1 = pounds * 240 + shillings * 12 + pence;
		n2 = s.pounds * 240 + s.shillings * 12 + s.pence;
		ns = n1 + n2;
		sterlings ss;
		ss.pounds = ns / 240;
		ss.shillings = ns % 240 / 12;
		ss.pence = ns % 240 % 12;
		return ss;
	}
	sterlings operator - (sterlings s) {
		int ns, n1, n2;
		n1 = pounds * 240 + shillings * 12 + pence;
		n2 = s.pounds * 240 + s.shillings * 12 + s.pence;
		ns = n1 - n2;
		sterlings ss;
		ss.pounds = ns / 240;
		ss.shillings = ns % 240 / 12;
		ss.pence = ns % 240 % 12;
		return ss;
	}
	double operator / (sterlings s) {
		int ns, n1, n2;
		n1 = pounds * 240 + shillings * 12 + pence;
		n2 = s.pounds * 240 + s.shillings * 12 + s.pence;
		ns = n1 / n2;
		return ns;
	}
	sterlings operator / (double s) {
		int ns, n1;
		n1 = pounds * 240 + shillings * 12 + pence;
		ns = n1 / s;
		sterlings ss;
		ss.pounds = ns / 240;
		ss.shillings = ns % 240 / 12;
		ss.pence = ns % 240 % 12;
		return ss;
	}
	sterlings operator * (double s) {
		int ns, n1;
		n1 = pounds * 240 + shillings * 12 + pence;
		ns = n1 * s;
		sterlings ss;
		ss.pounds = ns / 240;
		ss.shillings = ns % 240 / 12;
		ss.pence = ns % 240 % 12;
		return ss;
	}
};
int main() {
	sterlings s1, s2, ns;
	s1.getSterLing();
	s2.getSterLing();

	s1.putSterling(); cout << " + ";
	s2.putSterling(); cout << " = ";
	ns = s1 + s2; ns.putSterling();
	cout << endl << endl;

	s1.putSterling(); cout << " - ";
	s2.putSterling(); cout << " = ";
	ns = s1 - s2; ns.putSterling();
	cout << endl << endl;

	s1.putSterling(); cout << " / ";
	s2.putSterling(); cout << " = ";
	double ks = s1 / s2; cout << ks;
	cout << endl << endl;

	cout << "Enter number: "; cin >> ks;
	s1.putSterling(); cout << " / ";
	cout << ks << " = "; ns = s1 / ks;
	ns.putSterling(); cout << endl << endl;

	cout << "Enter number: "; cin >> ks;
	s2.putSterling(); cout << " * ";
	cout << ks << " = "; ns = s2 / ks;
	ns.putSterling(); cout << endl << endl;
}

