#include <iostream>
#include <string>
using namespace std;

class publication                     // base class
{
private:
    string title;
    float price;
public:
    void getdata()
    {
        cout << "\nEnter title: "; cin >> title;
        cout << "Enter price: "; cin >> price;
    }
    void putdata() const
    {
        cout << "\nTitle: " << title;
        cout << "\nPrice: " << price;
    }
};
class publication2 : private publication
{
private:
    string date;
public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter date of relize: ";
        cin >> date;
    }
    void putdata()
    {
        publication::putdata();
        cout << "\nDate of relize: ";
        cout << date;
    }
};
class book : private publication2
{
private:
    int pages;
public:
    void getdata()
    {
        publication2::getdata();
        cout << "Enter number of pages: "; cin >> pages;
    }
    void putdata()
    {
        publication2::putdata();
        cout << "\nPages: " << pages;
    }
};
class tape : private publication2
{
private:
    float time;
public:
    void getdata()
    {
        publication2::getdata();
        cout << "Enter playing time: "; cin >> time;
    }
    void putdata()
    {
        publication2::putdata();
        cout << "\nPlaying time: " << time;
    }
};

int main()
{
    book book1;
    tape tape1;

    book1.getdata();
    tape1.getdata();

    book1.putdata();
    tape1.putdata();
    cout << endl;
    return 0;
}
