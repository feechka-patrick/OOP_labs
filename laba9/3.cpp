// lab9_3.cpp
// sort an array of pointers to strings
#include <iostream>
#include <cstring>              //for strcmp(), etc.

using namespace std;
const int DAYS = 7;
void bsort(char** pp, int n)
{
    void order(char**, char**);
    int j, k;

    for (j = 0; j < n - 1; j++)
        for (k = j + 1; k < n; k++)
            order(pp + j, pp + k);
}

void order(char** pp1, char** pp2)
{
    if (strcmp(*pp1, *pp2) > 0)
    {
        char* tempptr = *pp1;
        *pp1 = *pp2;
        *pp2 = tempptr;
    }
}
        
int main()
{
    //void bsort(char**, int);     //prototype
                 //array of pointers to char
    char* arrptrs[DAYS] = { "Sunday", "Monday", "Tuesday",
                "Wednesday", "Thursday",
                "Friday", "Saturday" };

    cout << "\nUnsorted:\n";
    for (int j = 0; j < DAYS; j++)   
        cout << *(arrptrs + j) << endl;

    bsort(arrptrs, DAYS);        

    cout << "\nSorted:\n";
    for (int j = 0; j < DAYS; j++)        
        cout << *(arrptrs + j) << endl;
    return 0;
}



