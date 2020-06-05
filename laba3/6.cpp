#include <iostream>

enum etype{laborer = 'l', secretary = 's', manager = 'm', accountant = 'a', executive = 'e', researcher = 'r'};
using namespace std;
int main(){
	cout << "Enter the first letter of the post: ";
	char symbol; cin >> symbol;
	switch(symbol){
		case(laborer): cout << "laborer"; break;
		case(secretary): cout << "secretary"; break;
		case(manager): cout << "manager"; break;
		case(accountant): cout << "accountant"; break;
		case(executive): cout << "nexecutive"; break;
		case(researcher): cout << "researcher"; break;
		default: break;
	}
}
