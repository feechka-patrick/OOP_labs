#include <iostream>
#include <string>
using namespace std;

const int LIMIT = 100;         //array size

class safearay
{
protected:
    int arr[LIMIT];
public:
    int& operator [](int n)  //note: return by reference
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds"; exit(1);
        }
        return arr[n];
    }
};

class new_safearay : safearay
{
private:
    int left;
    int right;
public:
    new_safearay(int l, int r) {
        if (r - l >= LIMIT) {
            cout << "\nThe border is invalid"; exit(1);
        }
        left = l;
        right = r;
    }
    int& operator [](int n)
    {
        if (n < left || n >= right)
        {
            cout << "\nIndex out of bounds"; exit(1);
        }
        return arr[n - left];
    }

};

int main()
{
    int l = 100, r = 115;
    new_safearay array(l, r);

    for (int i = l; i < r; i++) {
        array[i] = i * 10;
    }
    for (int i = l; i < r; i++) {
        cout << " Number " << i << " element is " << array[i] << endl;
    }
}
