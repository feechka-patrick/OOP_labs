#include <iostream>

struct point{
	int x;
	int y;
};
using namespace std;
int main(){
	point one, two;
	cout << "Enter coordinates first point: ";
	cin >> one.x >> one.y;
	cout << "Enter coordinates second point: ";
	cin >> two.x >> two.y;
	point sum = {one.x + two.x, one.y + two.y};
	cout << "Coordinates point p1+p2: ";
	cout << sum.x << " " << sum.y;
	
}
