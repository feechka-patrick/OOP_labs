// перегрузка функций базового и производного классов
#include <iostream>
using namespace std;
#include <process.h> 

class Stack
{
protected:
    enum { MAX = 10 };
    int st[MAX];
    int top;
public:
    Stack()
    {
        top = -1;
    }
    void push(int var)
    {
        st[++top] = var;
    }
    int pop()
    {
        return st[top--];
    }
};
class Stack2 : public Stack
{
public:
    void push(int var)
    {
        if (top >= MAX - 1)
        {
            cout << "\nОшибка: стек полон"; exit(1);
        }
        Stack::push(var);
    }
    int pop()
    {
        if (top < 0)
        {
            cout << "\nОшибка: стек пуст\n"; exit(1);
        }
        return Stack::pop();
    }
};
struct Pair
{
    int x;
    int y;
};
class pairStack :Stack2
{
public:
    void push(Pair var)
    {
        Stack2::push(var.x);
        Stack2::push(var.y);
    }
    void pop()
    {
        Pair point;
        point.y = Stack2::pop();
        point.x = Stack2::pop();
        cout << "\n x: " << point.x;
        cout << "\n y: " << point.y;
        cout << endl;
    }
};
int main()
{
    setlocale(LC_ALL, "Russian");
    pairStack exampleStack;
    Pair point, point2, point3;
    point.x = 1;
    point.y = 2;
    exampleStack.push(point);
    point.x = 3;
    point.y = 4;
    exampleStack.push(point);
    point.x = 5;
    point.y = 6;
    exampleStack.push(point);
    cout << "\n  Point";
    exampleStack.pop();
    exampleStack.pop();
    exampleStack.pop();
    return 0;
}