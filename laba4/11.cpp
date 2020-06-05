 #include <iostream>
using namespace std;

struct sterlings{
	int pounds;
	int shillings;
	int pence;
};

struct sterlings ster(){
	struct sterlings s;
	cout << "\nEnter sum ";
	cout << "\nPounds: ";
	cin >> s.pounds;
	cout << "Shillings: ";
	cin >> s.shillings;
	cout << "Pence: ";
	cin >> s.pence;
	return s;
}
struct sterlings summ(struct sterlings s1, struct sterlings s2){
	struct sterlings str;
    int str1 = s1.pounds*240 + s1.shillings*12 + s1.pence;
	int str2 = s2.pounds*240 + s2.shillings*12 + s2.pence;
	int sum = str1 + str2;    
    str.pounds = sum / 240;
    str.shillings = sum%240 /12;
    str.pence = sum%240 %12;
	return str;
}

void enterS(struct sterlings str){
	cout << "\n\nSUMMA: " << str.pounds << "." << str.shillings << "." << str.pence;
}

int main(){
	struct sterlings s1, s2, sum;
	s1 = ster();
	s2 = ster();
	sum = summ(s1 , s2);
	enterS(sum);	
}	
