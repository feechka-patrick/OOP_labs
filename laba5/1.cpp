#include <iostream>
using namespace std;
class Int 
    {
    private:
    int i;
    public:
    Int() {
	i = 0;
	  }
    Int(int ii)  {
	i = ii;
	  }
    void add(Int i2,Int i3){
    i = i2.i + i3.i;
	  }
    void display(){
	cout << i;
	  }
    };

int main()
    {
    Int Int1(7);          
    Int Int2(11);         
    Int Int3;             
    Int3.add(Int1,Int2);  
    cout <<"\nInt3 = ";
	Int3.display(); 
    cout << endl;
    return 0;
    }
