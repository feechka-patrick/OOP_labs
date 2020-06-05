#include <iostream>
using namespace std;
void swap(int*a, int*b){
	int*buf = a;
	a = b;
	b = buf;
}
int main(){
	int a , b;
	cin >> a >> b;
	swap(a,b);
	cout << a << " " << b;
}
