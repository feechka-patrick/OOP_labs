#include <iostream>

using namespace std;

class angle{
	private:
		int gradus;
		float minutes;
		char n;
	public:
		void getangle(){
			cout << "\nEnter degrees: "; cin >> gradus;
			cout << "Enter minutes: "; cin >> minutes;
			cout << "Enter direction (N, S, S, E): "; cin >> n;
		}
		void putangle(){
			cout << endl << endl << gradus <<"°" << minutes << "\' " << n;
		}
		
};
int main(){
	angle a1, a2, a3;
	a1.getangle();
	a2.getangle();
	a3.getangle();
	a1.putangle();
	a2.putangle();
	a3.putangle();
}
