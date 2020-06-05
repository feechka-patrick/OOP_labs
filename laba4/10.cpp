# include <iostream>
using namespace std;
int count = 0;
void func(){
	cout << endl << count++ ;
}
int main(){
	int k = 0;
	while (k<10) {
		func();
		k++;
	}
}	
