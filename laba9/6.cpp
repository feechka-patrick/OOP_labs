#include <iostream>

using namespace std;
const int n = 5;

int strcmp(char* str1, char* str2) {
	int i = 0;
		while (str1[i] && str2[i]) {
			if (str1[i] == str2[i]) {
				i++;
				continue;
			}				
			if (str1[i] < str2[i])
				return -1;
			if (str1[i] > str2[i])
				return 1;			
		}
		return 0;
}
int main() {
	char first[] = { "anbnas" };
	cout << first << endl;
	char second[] = { "ananas" };
	cout << second << endl;
	int result = strcmp(first, second);
	cout << "sorted: ";
	switch (result)
	{
	case -1: cout << first << " " << second;
		break;
	case 0: cout << first << " " << second;
		break;
	case 1: cout << second << " " << first;
		break;

	default:
		break;
	}
}
