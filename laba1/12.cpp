#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
 cout << "¬ведите число дес€тичных фунтов: ";
 float dfunt; cin >> dfunt; 
 int p = (dfunt - static_cast<int> (dfunt))*100*2.4;
 cout <<"Ёквивалентна€ сумма в старой форме записи: " << static_cast<int> (dfunt)<<"."<< p/12<<"."<<p %12;
}
 

