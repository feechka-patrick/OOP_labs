#include <iostream>
using namespace std;

class token {
public:
	virtual float getnumber() {
		return NULL;
	};
	virtual char getoperator() {
		return NULL;
	};
};
class operand : public token {
private:
	char oper;
public:
	operand(char s) {
		oper = s;
	}
	char getoperator() {
		return oper;
	}
	float getnumber() {
		return NULL;
	};
};
class number : public token {
private:
	float fnum;
public:
	number(float x) {
		fnum = x;
	}
	float getnumber() {
		return fnum;
	}
	char getoperator() {
		return NULL;
	};
};



class Stack {
private:
	token* atoken[100];
	int last;
public:
	Stack() {
		last = 0;
	}
	void push(token* atok) {
		atoken[last] = atok;
		last++;
	}
	void show() {
		cout << atoken[0]->getnumber();
		for (int i = 1; i < last; i+=2) {
			cout << ' ' << atoken[i]->getoperator() << ' ';
			cout << atoken[i + 1]->getnumber();
		}
	}
};

int main() {
	Stack newStack;

	//3.14159 / 2.0 + 75.25 * 3,333 + 6.02

	newStack.push(new number(3.14159));
	newStack.push(new operand('/'));
	newStack.push(new number(2.0));
	newStack.push(new operand('+'));
	newStack.push(new number(75.25));
	newStack.push(new operand('*'));
	newStack.push(new number(3.333));
	newStack.push(new operand('+'));
	newStack.push(new number(6.02));

	newStack.show();
}
