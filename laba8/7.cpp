// constructors in derived class
#include <iostream>
using namespace std;

class Counter
{
protected:
    unsigned int count;
public:
    Counter() : count(0)
    {  }
    Counter(int c) : count(c)
    {  }
    unsigned int get_count() const
    {
        return count;
    }
    Counter operator ++ ()
    {
        return Counter(++count);
    }
};

class CountDn : public Counter
{
public:
    CountDn() : Counter()
    { }
    CountDn(int c) : Counter(c)
    { }
    CountDn operator -- ()
    {
        return CountDn(--count);
    }
    CountDn operator -- (int k)
    {
        return Counter::count--;
    }
    CountDn operator ++ (int k)
    {
        return Counter::count++;
    }
    CountDn operator ++ ()
    {
        return CountDn(++count);
    }
};

int main()
{
    CountDn c1(100);

    cout << "\n c1 = " << c1.get_count();
    CountDn cn = ++c1;
    cout << "\n ++c1 = " << cn.get_count();
    cn = --c1;
    cout << "\n --c1 = " << cn.get_count();
    cn = c1++;
    cout << "\n ++c1 = " << cn.get_count();
    cn = c1--;
    cout << "\n --c1 = " << cn.get_count();
    cout << "\n c1 = " << c1.get_count();

    cout << endl;
    return 0;
}
