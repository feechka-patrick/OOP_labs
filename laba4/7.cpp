#include <iostream>
using namespace std;
double power(double n, int p)
		{
		double result = 1.0;
		for(int j = 0 ; j < p; j++)
		result *=n;
		return result;
		}
long power(long n, int p)
		{
		long result =1;
		for(int j = 0 ; j < p; j++)
		result *=n;
		return result;
		}			
int power(int n, int p)
		{
		int result = 1;
		for(int j = 0 ; j < p; j++)
		result *=n;
		return result;
		}
float power(float n, int p)
		{
		float result = 1.0f;
		for(int j = 0 ; j < p; j++)
		result *=n;
		return result;
		}	
int power(char c, int p)
		{
		int n = c - '0';
		int result = 1;
		for(int j = 0 ; j < p; j++)
		result *=n;
		return result;
		}					
int main()
		{
		cout << "\nEnter number(int) : ";
		int d1; cin >> d1;
		cout << "Enter power(int) : ";
		int p1; cin >> p1;
		cout << "POWER: " << power(d1,p1);
		
		cout << "\n\nEnter number(long) : ";
		long d2; cin >> d2;
		cout << "Enter power : ";
		int p2; cin >> p2;
		cout << "POWER: " << power(d2,p2);
		
		cout << "\n\nEnter number(double) : ";
		double d3; cin >> d3;
		cout << "Enter power : ";
		int p3; cin >> p3;
		cout << "POWER: " << power(d3,p3);
		
		cout << "\n\nEnter number(float) : ";
		float d4; cin >> d4;
		cout << "Enter power : ";
		int p4; cin >> p4;
		cout << "POWER: " << power(d4,p4);
		
		cout << "\n\nEnter number(char) : ";
		char d5; cin >> d5;
		cout << "Enter power : ";
		int p5; cin >> p5;
		cout << "POWER: " << power(d5,p5);
		}
