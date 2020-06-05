#include <iostream>
#include <process.h>   
using namespace std;        
const int LIMIT = 100;         
class safearay
{
private:
    int arr[LIMIT];
    int left;
    int right;
public:
    safearay(int l, int r) {
        int n = r - l;
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds"; exit(1);
        }
        else {
            left = l;
            right = r;
        }
    }
    int& operator [](int n)  
    {
        if (n < 0 || n >= LIMIT)
        {
            cout << "\nIndex out of bounds"; exit(1);
        }
        return arr[n];
    }
    int array_size(){
        return right - left;
    }
    int ar_left(){
        int k = left;
        return k;
    }
};
int main()
{
    int l, r;
    cout << "Enter left: "; cin >> l;
    cout << "Enter right: "; cin >> r;
    safearay sa1(l,r);

    for (int j = 0; j < LIMIT; j++)  
        sa1[j] = j * 10;           
   
    for (int j = 0; j < sa1.array_size(); j++)
    {
        int temp = sa1[j];       
        cout << "Element " << j + sa1.ar_left() << " is " << temp << endl;
    }
    return 0;
}

