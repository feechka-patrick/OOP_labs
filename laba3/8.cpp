#include <iostream>
#include <algorithm>

using namespace std;
struct fraction{
	int a;
	int b;
};
int main(){
	fraction n1,n2;
	cout << "Enter first number: ";
	string n;
	cin >> n;
	int k = n.find('/');
	n1.a = atoi(n.substr(0, k).c_str()); 
	n.erase(n.begin(), n.begin() + k + 1);
	n1.b = atoi(n.c_str());
	
	cout << "Enter second number: ";
	cin >> n;
	k = n.find('/');
	n2.a = atoi(n.substr(0, k).c_str());
	n.erase(n.begin(), n.begin() + k + 1);
	n2.b = atoi(n.c_str());
	
	fraction ns;
	ns.a = n1.a*n2.b + n2.a*n1.b;
	ns.b = n1.b*n2.b;
	cout << "Summ: " << ns.a << "/" << ns.b;
}
