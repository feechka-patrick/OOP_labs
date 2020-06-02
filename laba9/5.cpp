#include <iostream>

using namespace std;
const int n = 5;

void addarrays(float* m1, float* m2, float* ms) {
	for (int i = 0; i < n; i++)
		*(ms + i) = *(m1 + i) + *(m2 + i);
}
int main() {
	float m1[n];
	for (int i = 0; i < n; i++) {
		*(m1 + i) = i + 1;
		cout << m1[i] << " ";
	}
	cout << endl;

	float m2[n];
	for (int i = 0; i < n; i++) {
		*(m2 + i) = i + 3;
		cout << m2[i] << " ";
	}
	cout << endl;

	float ms[n];
	addarrays(m1, m2, ms);

	for (int i = 0; i < n; i++)
		cout << *(ms + i) << " ";
	cout << endl;
}
