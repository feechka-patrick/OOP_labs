#include <iostream>
using namespace std;

struct time{
	int hours;
	int minutes;
	int seconds;
};

long time_to_secs(int h, int m, int s){
	return (h*3600 + m*60 + s);
}

struct time secs_to_time(long t){
	struct time tm;
	tm.hours = t/3600;
	tm.minutes = t%3600 /60;
	tm.seconds = t%3600 %60;
	return tm;
}

int main()
{
	struct time ts;
	long sec;
	cout << "\nEnter TIME1: ";
	cout << "\nHOURS: ";
	cin >> ts.hours;
	cout << "MINUTES: ";
	cin >> ts.minutes;
	cout << "SECONDS: ";
	cin >> ts.seconds;
	cout << "TOTAL SECONDS: " << time_to_secs(ts.hours, ts.minutes, ts.seconds);
	
	cout << "\n\nEnter TIME2 SECONDS: ";
	cin >> sec;
	struct time st = secs_to_time(sec);
	cout << "\nHOURS: " << st.hours;
	cout << "\nMINUTES: " << st.minutes;
	cout << "\nSECONDS: " << st.seconds;
}
