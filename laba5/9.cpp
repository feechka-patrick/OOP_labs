#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class fraction{
	private:
		int a;
		int b;
	public:
		void getfraction(){
			cout << "\nEnter fraction (a/b): ";
			string f; cin >> f;
			int k = f.find('/');
			a = atoi(f.substr(0, k).c_str());
			f.erase(0, k + 1);
			b = atoi(f.c_str());
		}
		void putfraction(){
			cout << a << '/' << b;
		}
		void add(fraction n1, fraction n2){
			a = n1.a*n2.b + n2.a*n1.b;
			b = n1.b*n2.b;
		}
};

	
int main(){
	fraction n1, n2, ns;
	n1.getfraction();
	n2.getfraction();
	ns.add(n1, n2);
	cout << "\nAnswer: " ; ns.putfraction();
	return 0;
}
