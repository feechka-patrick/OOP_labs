#include <iostream>
using namespace std;
int main(){
	for(int i = 38; i>=0; i-=2){
		int k = i;
		while(k > 0){
			cout << " ";
			k--;
		}
		k = 39 - i;
			while(k > 0){
			cout << "x";
			k--;
		}
		cout <<endl;	
	}
}
