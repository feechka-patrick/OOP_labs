#include <iostream>
#include <string>
using namespace std;
	
class employee
    {
    private:
      string name;
      long number;
    public:
      void getdata()    
        {
        cout <<"\nEnter name: "; cin >> name;
        cout <<"Enter number: "; cin >> number;
        }
      void putdata()    
        {
        cout <<"\nName:" << name;
        cout <<"\nNumber:" << number;
        }
    };
    
int main()
    {
    employee emparr[100]; 
    int n = 0;              
    char ch;               
    do {                   
      cout <<"\nEnter data about employee with number " << n+1;
      emparr[n++].getdata();
      cout <<"Continue (y/n)? "; 
	  cin >>ch;
      }while(ch != 'n');
    for (int j = 0; j < n; j++)   
      {
      cout <<"\nNumber empolyee: " << j+1;
      emparr[j].putdata();
      }
    cout <<endl;
    return 0;
    }
