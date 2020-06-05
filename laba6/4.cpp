#include <iostream>
using namespace std;
const int n = 10;

int maxint(int* ar){
	int max = -2147483648;
	int ind = 0;
	for(int i; i < n; i++){
	if (*(ar + i) > max) {
		ind = i;
		max = *(ar + i);
		}
	}
	return ind;
}

int main()
    {
    int arr[n];
    for(int i; i < n; i++) cin >> arr[i];
    int ind = maxint(arr);
    cout << endl << arr[ind] << " " << ind;
    }
