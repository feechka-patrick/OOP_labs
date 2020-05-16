#include <iostream>
using namespace std;

class sterlings {
protected:
	int pounds;
	int shillings;
	int pence;

	double doubleSterling;
public:
	sterlings() {}
	void toSterlings() {
		int sum = doubleSterling;
		pounds = sum / 240;
		shillings = sum % 240 / 12;
		pence = sum % 240 % 12;
	}
	void toDouble() {
		doubleSterling = pounds * 240 + shillings * 12 + pence;
	}
	void getSterling(string str) {
		//str.erase(str.begin());
		int p = str.find('.');
		pounds = atoi(str.substr(0, p).c_str());
		str.erase(0, p + 1);
		p = str.find('.');
		shillings = atoi(str.substr(0, p).c_str());
		str.erase(0, p + 1);
		pence = atoi(str.c_str());
		toDouble();
	}
	void putSterling() {
		toSterlings();
		cout << pounds << "." << shillings << "." << pence;
	}
};
class sterfrac : private sterlings
{
private:
	int eighths;
public:
	sterfrac() {
		sterlings::sterlings();
		eighths = 1;
	}
	void getSterfrac() {
		string str;
		cout << "Enter sterlings: " << str;
		cin >> str;
		int tire = str.find("-");
		string frac = str.substr(tire + 1, str.size() - 1);
		str.erase(tire, str.size() - 1);

		sterlings::getSterling(str);

		int symbol = frac.find("/");
		int a = atoi(frac.substr(0, symbol).c_str());
		frac.erase(0, symbol + 1);
		int b = atoi(frac.c_str());
		while (b != 8) {
			b *= 2;
			a *= 2;
		}
		eighths = a;
	}
	void putSterfrac() {
		sterlings::putSterling();
		int a = eighths, b = 8;
		while (a % 2 == 0 && b % 2 == 0) {
			a /= 2;
			b /= 2;
		}
		cout << "-" << a << "/" << b;
	}
	sterfrac operator + (sterfrac s) {
		sterfrac totalSterfrac;
		totalSterfrac.doubleSterling = doubleSterling + s.doubleSterling;

		totalSterfrac.eighths = eighths + s.eighths;
		totalSterfrac.doubleSterling += totalSterfrac.eighths / 8;
		totalSterfrac.eighths %= 8;

		return totalSterfrac;
	}
	sterfrac operator - (sterfrac s) {
		sterfrac totalSterfrac;
		totalSterfrac.doubleSterling = doubleSterling - s.doubleSterling;

		totalSterfrac.eighths = eighths - s.eighths;
		totalSterfrac.doubleSterling += totalSterfrac.eighths / 8;
		totalSterfrac.eighths %= 8;

		return totalSterfrac;
	}
	double operator / (sterfrac s) {
		double totalSter;
		totalSter = (doubleSterling + eighths / 8) / (s.doubleSterling + s.eighths / 8);
		return totalSter;
	}
	sterfrac operator * (double s) {
		sterfrac totalSterfrac;
		totalSterfrac.doubleSterling = doubleSterling * s;

		totalSterfrac.eighths = eighths * s;
		totalSterfrac.doubleSterling += totalSterfrac.eighths / 8;
		totalSterfrac.eighths %= 8;

		return totalSterfrac;
	}
};
int main() {
	sterfrac exSter1, exSter2;
	exSter1.getSterfrac();
	exSter2.getSterfrac();

	cout << endl;
	exSter1.putSterfrac(); cout << " + ";
	exSter2.putSterfrac(); cout << " = ";
	sterfrac result = exSter1 + exSter2;
	result.putSterfrac();

	cout << endl;
	exSter1.putSterfrac(); cout << " - ";
	exSter2.putSterfrac(); cout << " = ";
	result = exSter1 - exSter2;
	result.putSterfrac();

	cout << endl;
	exSter1.putSterfrac(); cout << " / ";
	exSter2.putSterfrac(); cout << " = ";
	double res = exSter1 / exSter2;
	cout << res;

	cout << "\n Enter number: ";
	double number; cin >> number;
	exSter2.putSterfrac(); cout << " * " <<
		number << " = ";
	result = exSter2 * number;
	result.putSterfrac();
}