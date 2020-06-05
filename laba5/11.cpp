#include <iostream>
#include <cstdlib>

using namespace std;

class fraction{
	private:
		int a;
		int b;
	public:
		void getfraction(){
			cout << "Enter fraction (a/b): ";
			string f; cin >> f;
			int k = f.find('/');
			a = atoi(f.substr(0, k).c_str());
			f.erase(0, k + 1);
			b = atoi(f.c_str());
		}
		void putfraction(){
			cout << a << '/' << b;
		}
		void fadd(fraction n1, fraction n2){
			a = n1.a*n2.b + n2.a*n1.b;
			b = n1.b*n2.b;
		}
		void fmul(fraction n1, fraction n2){
			a = (n1.a*n2.a);
			b = (n1.b*n2.b);
		}
		void fdiv(fraction n1, fraction n2){
			a = (n1.a*n2.b);
			b = (n1.b*n2.a); 
		}
		void fsub(fraction n1, fraction n2){
			a = (n1.a*n2.b - n1.b*n2.a);
		    b = (n1.b*n2.b); 
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
	fraction n1, n2, ns;
	n1.getfraction();
	cout << "Enter operator: (+, -, *, /) ";
	char oper; cin >> oper;
	n2.getfraction();
	switch(oper)
    {
	case '+': ns.fadd(n1,n2);
		  break;
	case '-': ns.fsub(n1,n2);
		  break;
	case '*': ns.fmul(n1,n2);
		  break;
	case '/': ns.fdiv(n1,n2);
		  break;
	default: break;
	}	
	ns.lowterms();
	cout << "\nAnswer: " ; ns.putfraction();
	return 0;
}
