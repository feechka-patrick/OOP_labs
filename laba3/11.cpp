#include <iostream>
#include <algorithm>

using namespace std;
struct time{
	int hours;
	int minutes;
	int seconds;
};
int main(){
	time t1, t2, ts;
	cout <<"Enter time 1: ";
	string s1; cin >> s1;
	int k = s1.find(':'); 
	t1.hours = atoi(s1.substr(0, k).c_str());
	s1.erase(s1.begin(), s1.begin() + k + 1);
	k = s1.find(':');
	t1.minutes = atoi(s1.substr(0, k).c_str());
	s1.erase(s1.begin(), s1.begin() + k + 1);
	t1.seconds = atoi(s1.c_str());
	
	cout <<"Enter time 2: ";
	string s2; cin >> s2;
	k = s2.find(':');
	t2.hours = atoi(s2.substr(0, k).c_str());
	s2.erase(s2.begin(), s2.begin() + k + 1);
	k = s2.find(':');
	t2.minutes = atoi(s2.substr(0, k).c_str());
	s2.erase(s2.begin(), s2.begin() + k + 1);
	t2.seconds = atoi(s2.c_str()); 
	
	int sum = t1.hours*3600 + t1.minutes*60 + t1.seconds + t2.hours*3600 + t2.minutes*60 + t2.seconds;
	ts.hours = sum/3600;
	ts.minutes = sum%3600 / 60;
	ts.seconds = sum%3600 %60;
	
	cout << "TIME: " << ts.hours << ":" << ts.minutes << ":" << ts.seconds;
}
