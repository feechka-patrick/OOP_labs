#include <iostream>

using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
int main(){
	time t1;
	cout << "Enter time\n";
	cout << "HOURS: ";
	cin >> t1.hours;
	cout << "MINUTES: ";
	cin >> t1.minutes;
	cout << "SECONDS: ";
	cin >> t1.seconds;
	
	cout <<"\nTOTAL SECONDS " << t1.hours*3600 + t1.minutes*60 + t1.seconds;
}
