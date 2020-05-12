#include <iostream>
#include <string>
using namespace std;

const int LEN = 80;

class employee
{
private:
    char name[LEN];
    unsigned long number;
public:
    void getdata()
    {
        cout << "\n   Enter last name: "; cin >> name;
        cout << "   Enter number: ";      cin >> number;
    }
    void putdata() const
    {
        cout << "\n   Name: " << name;
        cout << "\n   Number: " << number;
    }
};
enum period { hourly = 'h', weekly = 'w', monthly = 'm' };
class employee2 : private employee
{
private:
    double compensation;
    char c;
public:
    void getdata() {
        employee::getdata();
        cout << " Enter compensation: ";
        cin >> compensation;
        cout << " Enter period (h, w, m): ";
        cin >> c;
    }
    void putdata() {
        employee::putdata();
        cout << "\n Compensation: ";
        cout << compensation;
        cout << "\n Period : ";
        switch (c)
        {
        case(hourly): cout << "hourly\n";
            break;
        case(weekly): cout << "weekly\n";
            break;
        case(monthly): cout << "monthly\n";
            break;
        default:
            break;
        }
    }
};

int main()
{
    employee2 e1;
    e1.getdata();
    e1.putdata();
}
