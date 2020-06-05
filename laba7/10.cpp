#include <iostream>
#include <cmath>   
using namespace std;        
const int LIMIT = 100;         
class Polar
{
private:
    double r;
    double fi;
    double x;
    double y;
public:
    void trXY() {
        x = cos(fi*0.01745)/ r;
        y = sin(fi*0.01745)/ r;
    }
    void trPolar() {
        r = pow(x*x + y*y, 0.5);
        fi = acos(round(x * r))/ 0.01745;
    }
    void getPoint() {
        cout << "Enter radius: "; cin >> r;
        cout << "Enter angle: "; cin >> fi;
        
    }
    void putPoint() {
        cout << "\nRadius: "; cout << r;
        cout << "\nAngle: "; cout << round(fi);
    }
    Polar operator + (Polar p2) {
        trXY();
        p2.trXY();
        Polar ps;
        ps.x = x + p2.x;
        ps.y = y + p2.y;
        ps.trPolar();
        return ps;
    }
};
int main()
{
    Polar p1, p2, ps;
    p1.getPoint();
    cout << " + \n";
    p2.getPoint();
    cout << " = ";
    ps = p1 + p2;
    ps.putPoint();
    return 0;
}

