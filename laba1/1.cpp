#include <iostream>
using namespace std;
int main(){
  float gallons;
  cout << "\nEnter quantity in gallons: ";
  cin >> gallons;
  cout << "Equivalent in cublic feet is " << gallons / 7.481 << endl;
  return 0;
}
