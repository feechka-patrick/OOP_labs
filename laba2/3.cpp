#include <iostream>
using namespace std;
#include <conio.h>
int main()
{
char ch;
unsigned long total = 0; 
cout << "\nEnter a number: ";
while( (ch=getche()) != '\r' ) 
total = total*10 + ch-'0'; 
cout << "\nNumber is: " << total << endl;
return 0;
}
