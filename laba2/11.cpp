#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
	char ch;
do {
	string sum1, sum2;
	char oper;
cout << "\nEnter first number, operator, second number: ";
cin >> sum1 >> oper >> sum2;
float n1, n2; 
int i = 5;
if ( count(sum1.begin(), sum1.end(), '.') == 2 ){
	i = sum1.find(".");
	n1 = atoi(sum1.substr(0, i).c_str()) * 240;
	sum1.erase(0, i+1);
	i = sum1.find(".");
	n1 += atoi(sum1.substr(0, i).c_str()) * 12;
	sum1.erase(0, i+1);
	n1 += atoi(sum1.c_str());
} 
else n1 = atoi(sum1.c_str());

if ( count(sum2.begin(), sum2.end(), '.') == 2 ){
	i = sum2.find(".");
	n2 = atoi(sum2.substr(0, i).c_str()) * 240;
	sum2.erase(0, i+1);
	i = sum2.find(".");
	n2 += atoi(sum2.substr(0, i).c_str()) * 12;
	sum2.erase(0, i+1);
	n2 += atoi(sum2.c_str());
	
} 
else n2 = atoi(sum2.c_str());

int ans;
switch(oper)
{
case '+': ans = n1 + n2; break;
case '-': ans = n1 - n2; break;
case '*': ans = n1 * n2; break;
default: ans = 0;
}
cout << "\nAnswer = " << ans/240 <<"."<< ans%240 /12 <<'.' << ans%240%12 ;


cout << "\nDo another (Enter 'y' or 'n')? ";
cin >> ch;
} while( ch != 'n' );

return 0;
}
