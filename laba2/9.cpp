#include <iostream>
using namespace std;
int main(){
	cout << "Enter number of guests: ";
	int guests; cin >> guests;
	cout << "Enter number of chairs: ";
	int chairs; cin >> chairs;
	long long fact = 1;
	for (int i=0; i<chairs; i++)
		fact *= (guests - i);
		
	cout  << fact;		
}
