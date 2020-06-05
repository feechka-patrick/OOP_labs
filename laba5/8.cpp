#include <iostream>
using namespace std;
class number{
	private:
		static int count;
		int n;
	public:
		
		number(){	
		 ++count;
		 n = count;
		}
		void putnumber(){
			cout << "\nMy number: "<< n ;
		}	
};

	int number::count = 0;

int main(){
	number n1, n2, n3;
	n1.putnumber();
	n2.putnumber();
	n3.putnumber();
	return 0;
}
