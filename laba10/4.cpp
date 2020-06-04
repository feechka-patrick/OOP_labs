// clarray.cpp
// creates array class
#include <iostream>
using namespace std;
class Array                     //models a normal C++ array
{
private:
    int* ptr;                 //pointer to Array contents
    int size;                 //size of Array
public:
    Array(int s)              //one-argument constructor
    {
        size = s;              //argument is size of Array
        ptr = new int[s];      //make space for Array
    }
    Array(Array& new_ar) 
    {
        size = new_ar.size;
        ptr = new_ar.ptr;
    }
    ~Array()                  //destructor
    {
        delete[] ptr;
    }
    int& operator [] (int j)  
    {
        return *(ptr + j);
    }
    void operator = (Array& new_ar)
    {
        size = new_ar.size;
        ptr = new_ar.ptr;
    }
};
int main()
{
    const int ASIZE = 10;        
    Array arr1(ASIZE), arr2(ASIZE);            

    for (int j = 0; j < ASIZE; j++)
    {
        arr1[j] = j * j;
        arr2[j] = j + 1;
    }
       
    cout << "arr1 = ";
    for (int j = 0; j < ASIZE; j++)       
        cout << arr1[j] << ' ';
    cout << endl;

    cout << "arr2 = ";
    for (int j = 0; j < ASIZE; j++)
        cout << arr2[j] << ' ';
    cout << endl;

    cout << "arr3(arr2) = ";
    Array arr3(arr2);

    for (int j = 0; j < ASIZE; j++)
        cout << arr3[j] << ' ';
    cout << endl;

    cout << "arr3 = arr1\narr3 = ";
    arr3 = arr1;
    for (int j = 0; j < ASIZE; j++)
        cout << arr3[j] << ' ';
    cout << endl;

    return 0;
}

