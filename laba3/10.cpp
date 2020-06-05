#include <iostream>

using namespace std;
struct sterlings{
	int pounds;
	int shillings;
	int pence;
};
int main(){
	sterlings str;
	cout << "Enter sum\n";
	double sum0; cin >> sum0;
	sum0*=240;
	int sum = sum0;
    str.pounds = sum / 240;
    str.shillings = sum%240 /12;
    str.pence = sum%240 %12;
    
    cout << "OLD STERLINGS: " << str.pounds << "." << str.shillings << "." << str.pence;
	
}
