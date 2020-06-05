#include <iostream>
#include <cstdlib>
using namespace std;

class fraction{
	private:
		int a;
		int b;
	public:
		fraction(){
			a = 0;
			b = 1;
		}
		void getfraction(string f){
			int k = f.find('/');
			a = atoi(f.substr(0, k).c_str());
			f.erase(0, k + 1);
			b = atoi(f.c_str());
		}
		void putfraction(){
			if (b == 1) cout << a;
			else cout << a << '/' << b;
		}
		void fadd(fraction n2){
			a = a*n2.b + n2.a*b;
			b = b*n2.b;
		}
		void average(int count){
			b *= count;
		}
		void lowterms(){
			long tnum, tden, temp,gcd;
			tnum = labs(a); 
			tden = labs(b); 
			if (tden == 0) { 
			exit(1);
			} else if(tnum == 0) {
				a = 0;
				b = 1;
				return;
			}

    		while(tnum != 0) {
			if(tnum < tden) { 
				temp = tnum;
				tnum = tden;
				tden = temp;
				}	
			tnum = tnum - tden;
					}
			gcd = tden;
			a = a / gcd;
			b = b / gcd;
		}
};	
int main(){
    fraction n[100];
    cout << "Enter fraction (a/b), if you want stop and get average fraction enter 0\n";
    string f;
    int count = 0;
    while ( f!= "0"){
    	cin >> f;
    	if (f!= "0") n[count].getfraction(f);
    	count++;
	}
	fraction total;
	for (int i=0; i<count; i++) total.fadd(n[i]);
	--count;
	total.average(count);
	total.lowterms();
	cout << "\nAwerage: " ; total.putfraction();
	return 0;
}
