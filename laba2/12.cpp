#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
string n1, n2;
char oper, ch;
do {
cout << "\nEnter first number, operator, second number: ";
cin >> n1 >> oper >> n2;

int i = n1.find('/');
int a = atoi(n1.substr(0, i).c_str());
n1.erase(0, i+1);
int b = atoi(n1.c_str());


i = n2.find('/');
int c = atoi(n2.substr(0, i).c_str());
n2.erase(0, i+1);
int d = atoi(n2.c_str());

int ans1, ans2;
switch(oper)
{
case '+': ans1 = (a*d + b*c);
		  ans2 = (b*d); 
		  break;
case '-': ans1 = (a*d - b*c);
		  ans2 = (b*d); 
		  break;
case '*': ans1 = (a*c);
		  ans2 = (b*d);
		  break;
case '/': ans1 = (a*d);
		  ans2 = (b*c);
		  break;
default: ans1 = 0;
}
cout << "Answer = " << ans1 << "/" << ans2;
cout << "\nDo another (Enter 'y' or 'n')? ";
cin >> ch;
} while( ch != 'n' );
return 0;
}
