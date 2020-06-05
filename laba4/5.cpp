#include <iostream>
using namespace std;

long hms_to_secs(int hour, int minute, int second){
	return second + minute*60 + hour*60*60;
}

int main()
    {
    	int ex;
    	do{
		cout << "HOURS: ";
		int h; cin >> h;
		cout << "MINUTES: ";
		int m; cin >> m;
		cout << "SECONDS: ";
		int s; cin >> s;
		cout << "TOTAL SECONDS:" << hms_to_secs(h,m,s);
		
    	cout << "\nTo exit the program, enter 0; to continue, enter 1: ";
    	cin >> ex;
    	}
    	while (ex!=0);
	}
