#include <iostream>
using namespace std;

struct time{
	int hours;
	int minutes;
	int seconds;
};

void swap(struct time *a, struct time *b){
	struct time *buf = a;
	a = b;
	b = buf;
}
int main(){
	struct time st {12, 4, 5};
	cout <<"\n\nTIME1";
	cout << "\nHOURS: " << st.hours;
	cout << "\nMINUTES: " << st.minutes;
	cout << "\nSECONDS: " << st.seconds;

	struct time sb {7, 3, 1};
	cout <<"\n\nTIME2";
	cout << "\nHOURS: " << sb.hours;
	cout << "\nMINUTES: " << sb.minutes;
	cout << "\nSECONDS: " << sb.seconds;
	
	cout << "\n\nAFTER SWAP";
	swap(st,sb);
	
	cout <<"\n\nTIME1";
	cout << "\nHOURS: " << st.hours;
	cout << "\nMINUTES: " << st.minutes;
	cout << "\nSECONDS: " << st.seconds;
	cout <<"\n\nTIME2";
	cout << "\nHOURS: " << sb.hours;
	cout << "\nMINUTES: " << sb.minutes;
	cout << "\nSECONDS: " << sb.seconds;
}
