// lab9_1.cpp
// finds average of numbers typed by user
#include <iostream>
using namespace std;

int main()
{
    float flarr[100];                   
    char ch;                           
    int num = 0;                        
    do
    {
        cout << "Enter number: ";       
        cin >> *(flarr + num++);           
        cout << "   Enter another (y/n)? ";
        cin >> ch;
    } while (ch != 'n');

    float total = 0.0;                  
    for (int k = 0; k < num; k++)            
        total += *(flarr + k);
    float average = total / num;       
    cout << "Average is " << average << endl;
    return 0;
}

