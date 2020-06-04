#include <iostream>
#include <string>
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
protected:
	token* atoken[100];
	int last;
public:
	Stack() {
		last = 0;
	}
	void push(token* atok) {
		if (last < 100) {
			atoken[last] = atok;
			last++;
		}
		else exit(1);
	}
	void show() {
		cout << atoken[0]->getnumber();
		for (int i = 1; i < last; i += 2) {
			cout << ' ' << atoken[i]->getoperator() << ' ';
			cout << atoken[i + 1]->getnumber();
		}
	}
	friend float solve(Stack);
};

float solve(Stack s)                 
{
	float result = s.atoken[0]->getnumber();
	int i = 1;
    while (i < s.last)
    {
        switch (s.atoken[i]->getoperator())              //get previous operator
        {                           //do operation, push answer
        case '+': result += s.atoken[++i]->getnumber(); break;
        case '-': result -= s.atoken[++i]->getnumber(); break;
        case '*': result *= s.atoken[++i]->getnumber(); break;
        case '/': result /= s.atoken[++i]->getnumber(); break;
        default:  cout << "\nUnknown operator"; exit(1);
        }  
		i++;
    }  
    return result;           
}  

int main() {
	char change;
	//3.14159 / 2.0 + 75.25 * 3,333 + 6.02

	do {
		Stack newStack;
		cout << "\nEnter expression: ";
		string expression; getline(cin, expression);
        bool l = true;
		while (!expression.empty()) {
			int k = expression.find(' ');
			string ch;
			if (k >= 0)
				ch = expression.substr(0, k);
			else {
				ch = expression;
				k = 0;
			}
            if (l) {
                float ans = atof(ch.c_str());
                newStack.push(new number(ans));
                l = !l;
            }
            else {
                char oper = ch[0];
                newStack.push(new operand(oper));
				l = !l;
            }
            expression.erase(0, k + 1);
		}
                        
		cout << "\nThe numerical value is: "
			<< solve(newStack);               
		delete &newStack;
		cout << "\nDo another (Enter y or n)? ";
		cin >> change;
	} while (change == 'y');

}

