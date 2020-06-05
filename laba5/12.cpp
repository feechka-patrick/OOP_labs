#include <iostream>
#include <cstdlib>
#include <iomanip>


using namespace std;

class fraction{
	private:
		int a;
		int b;
	public:
		fraction(int i, int j){
			a = i;
			b = j;
		}
		void putfraction(){
			if (a<10) cout << " ";
			if (b<10) cout << " ";
			cout << a  << '/' << b << setw(6) ;
		}
		void fmul(fraction n1, fraction n2){
			a = (n1.a*n2.a);
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
	cout <<"Enter number: "; 
	int n; cin >> n;
	
	for (int i = 0; i < n; i++){
		for(int j = 0; j<n; j++){
			if ( i == 0 && j ==0 ) cout << setw(6) <<"               ";
			else if (i == 0){
				fraction n1(j,n);
				n1.lowterms();
				n1.putfraction();
			}
			else if (j == 0){
				fraction n1(i,n);
				n1.lowterms();
				n1.putfraction();
			}
			else {
				fraction n1(i,n), n2(j,n), ns(1,1);
				ns.fmul(n1, n2);
				ns.lowterms();
				ns.putfraction();
			}
		}
		cout << endl;
	}
}
