#include <iostream>
#include <conio.h>
using namespace std;
const char ESC = 27;
class toLLBooth {
	private:
		unsigned int car;
		double money;
	public:
		toLLBooth(): car(), money(){		
		}
	void payingCar(){
		car++;
		money+=0.50;
	}		
	void nopayCar(){
		car++;
	}
	void display()const {
		cout <<"\nCar: "<<car;
		cout <<"\nMoney: "<<money;
	}
};
    

int main()
    {
       toLLBooth booth;
       cout <<"Enter 1 to pay for your ride or enter 0 for a free ride on the card ";
       cout <<"\nEnter ESC for exit\n";
	   char select; 
       do {
      select = getche();  
	  cout << " ";         
      if (select == '0')        
        booth.nopayCar();
      if (select == '1')          
        booth.payingCar();
      } while(select != ESC);  
	      
    booth.display();         
    return 0;
    }

