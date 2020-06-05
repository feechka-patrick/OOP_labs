 #include <iostream>
using namespace std;

class employee{
	private:
		int number;
		float benefit;
	public:
		void enter(){
	cout << "\nEnter data about employee ";
	cout << "\nEmployee number: "; cin >> number;
	cout << "Enter the amount of benefits: "; cin >> benefit;
		}
		void print(){
		cout <<"\nEmployee number: " << number;
		cout <<"\nBenefit: " << benefit;
		}
};

int main(){
	employee e1, e2, e3;
	e1.enter();
	e2.enter();
	e3.enter();
	e1.print();
	e2.print();
	e3.print();
}
