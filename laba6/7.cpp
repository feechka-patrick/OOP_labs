#include <iostream> 
#include <stdlib.h>
#include <math.h>

using namespace std;

class money
{
	private:
		double number;
	public:
		void mstold(){
			cout << "\nEnter number: ";
			char n[100], str[100];
			cin.get(n, 100);
			int j = 0;
			for (int i = 1 ; i < 100; i++)
				if (n[i] != ',' && n[i] != ' '){
					str[j] = n[i];
					j++;
				}
			number = atof(str);	//функция _atold() у меня не                    работает и информацию по ней найти я не смогла
		}
		void display(){
			cout <<'$'<< number;
		}
};


int main()
{
	money s1;
	s1.mstold();
	s1.display();	
}
