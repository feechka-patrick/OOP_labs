#include <iostream> 
#include <stdlib.h>
#include <math.h>
#include <vector>

using namespace std;
const int LIMIT = 10;
class safearay
{
	private:
	 	vector<int> array; 
	public:
	safearay(){
		array.resize(LIMIT);
		for (int i=0; i<LIMIT; i++) array[i] = i + 1;
	}	
	void putel(int ind, int num){
		if (ind >= 0 && ind < LIMIT - 1){
			array.insert(array.begin() + ind, num);
		}
	}
	int getel(int ind){
		if (ind >= 0 && ind < LIMIT - 1){
			return array[ind];
		}
	}
};


int main()
{
	safearay sal;
	int temp = 12345;	
	sal.putel (7, temp);
	temp = sal.getel(7);
	cout << temp;	
}	
