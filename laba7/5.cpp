#include <iostream>
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
    cout << "Enter hours: "; cin >> h;
    cout << "Enter minures: "; cin >> m;
    cout << "Enter seconds: "; cin >> s;
    time time1(h,m,s);

    cout << "\nTime: "; time1.display();
    time time2 = time1++;
    cout << "\nTime++: "; time2.display();
    time2 = time1--;
    cout << "\nTime--: "; time2.display();
    time2 = ++time1;
    cout << "\n++Time: "; time2.display();
    time2 = --time1;
    cout << "\n--Time: "; time2.display();
    cout << endl;
    return 0;
}

