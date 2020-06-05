#include <iostream>
#include <process.h>
using namespace std;
class time
{
private:
    int hrs, mins, secs;
public:
    time() : hrs(0), mins(0), secs(0)
    {  }
    time(int h, int m, int s) : hrs(h), mins(m), secs(s)
    {  }
    void display()
    {
        cout << hrs << ":" << mins << ":" << secs;
    }

    time operator + (time t2)
    {
        int s = secs + t2.secs;
        int m = mins + t2.mins;
        int h = hrs + t2.hrs;
        if (s > 59)
        {
            s -= 60; m++;
        }
        if (m > 59)
        {
            m -= 60; h++;
        }
        return time(h, m, s);
    }
    time operator - (time t)
    {
        long double k1 = hrs * 3600 + mins * 60 + secs;
        long double k2 = t.hrs * 3600 + t.mins * 60 + t.secs;
        long double answer = k1 + k2;
        if (answer > 2147483648) {
            cout << "\nOverflow Error\n"; exit(1);
        }
        t.hrs = answer / 3600;
        t.mins = (answer - (t.hrs * 3600)) / 60;
        t.secs = answer - (t.hrs * 3600) - t.mins * 60;
        return t;
    }
    time operator * (time t)
    {
        float k1 = hrs * 3600 + mins * 60 + secs;
        float k2 = t.hrs * 3600 + t.mins * 60 + t.secs;
        float answer = k1 * k2;
        if (answer > 2147483648) {
            cout << "\nOverflow Error\n"; exit(1);
        }
        t.hrs = answer / 3600;
        t.mins = (answer - (t.hrs * 3600)) / 60;
        t.secs = answer - (t.hrs * 3600) - t.mins * 60;
        return t;
    }
    time operator ++ (int k)
    {   
        time t1;
        t1.hrs = hrs++;
        t1.mins = mins;
        t1.secs = secs;
        return t1;
    }
    time operator -- (int k)
    {
        time t1;
        t1.hrs = hrs--;
        t1.mins = mins;
        t1.secs = secs;
        return t1;
    }
    time operator ++ ()
    {
        time t1;
        t1.hrs = ++hrs;;
        t1.mins = mins;
        t1.secs = secs;
        return t1;
    }
    time operator -- ()
    {
        time t1;
        t1.hrs = --hrs;
        t1.mins = mins;
        t1.secs = secs;
        return t1;
    }
   
};

int main()
{
    int h; int m; int s;
    cout << "TIME 1: ";
    cout << "\nEnter hours: "; cin >> h;
    cout << "Enter minures: "; cin >> m;
    cout << "Enter seconds: "; cin >> s;
    time time1(h,m,s);
    cout << "\nTIME 2: ";
    cout << "\nEnter hours: "; cin >> h;
    cout << "Enter minures: "; cin >> m;
    cout << "Enter seconds: "; cin >> s;
    time time2(h, m, s);
    
    time answ1 = time1 * time2;
    time1.display(); cout << " * "; time2.display();
    cout << " = "; answ1.display(); cout << endl ;
    time answ2 = time1 + time2;
    time1.display(); cout << " + "; time2.display();
    cout << " = "; answ2.display(); cout << endl;
}

