#include <iostream>

const int LEN = 80;                //maximum length of names
////////////////////////////////////////////////////////////////
class employee                     //employee class
{
private:
    char name[LEN];              //employee name
    unsigned long number;        //employee number
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
