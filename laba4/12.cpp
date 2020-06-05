#include <iostream>
#include <algorithm>
using namespace std;

struct fraction{
	int a;
	int b;
};
struct fraction fmul(struct fraction n1, struct fraction n2){ 
	struct fraction ns;
	ns.a = (n1.a*n2.a);
	ns.b = (n1.b*n2.b);
	return ns;
}
struct fraction fdiv(struct fraction n1, struct fraction n2){ 
	struct fraction ns;
	ns.a = (n1.a*n2.b);
	ns.b = (n1.b*n2.a); 
	return ns;
}
struct fraction fadd(struct fraction n1, struct fraction n2){ 
	struct fraction ns;
	ns.a = (n1.a*n2.b + n1.b*n2.a);
	ns.b = (ns.b*n2.b); 
	return ns;
}
struct fraction fsub(struct fraction n1, struct fraction n2){ 
	struct fraction ns;
	ns.a = (n1.a*n2.b - n1.b*n2.a);
	ns.b = (n1.b*n2.b); 
	return ns;
}
int main(){
	fraction n1,n2;
	cout << "Enter first number: ";
	string n;
	cin >> n;
	int k = n.find('/');
	n1.a = atoi(n.substr(0, k).c_str()); 
	n.erase(n.begin(), n.begin() + k + 1);
	n1.b = atoi(n.c_str());
	
	cout << "Enter operator:";
	char oper; cin >> oper;
	
	cout << "Enter second number: ";
	cin >> n;
	k = n.find('/');
	n2.a = atoi(n.substr(0, k).c_str());
	n.erase(n.begin(), n.begin() + k + 1);
	n2.b = atoi(n.c_str());
	
	
	fraction ns;
switch(oper)
    {
	case '+': ns = fadd(n1,n2);
		  break;
	case '-': ns = fsub(n1,n2);
		  break;
	case '*': ns = fmul(n1,n2);
		  break;
	case '/': ns = fdiv(n1,n2);
		  break;
	default: break;
	}	
	cout <<"\n\n\ANSWER: "<< ns.a << '/' << ns.b;
}	
