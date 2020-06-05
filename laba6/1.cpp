#include <iostream>
#include <cstring>
using namespace std;

void reversit(char s[])
    {
    int len = strlen(s);        
    for (int j = 0; j < len/2; j++) 
      {
      char temp = s[j];        
      s[j] = s[len - j -1];     
      s[len-j-1] = temp;
      }
    }
int main()
    {
    void reversit(char s[]);
    const int MAX = 80;        
    char str [MAX];            
    cout <<"\nEnter srting: ";
                               
    cin.get(str, MAX);
    reversit(str);             
    cout <<"Inverted string: ";
    cout << str <<endl;
    return 0;
    }

