// lab9_2.cpp
// member function converts String objects to upper case
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>       //for strcpy(), etc
#include <cctype>        //for toupper()
using namespace std;

class String             
{
private:
    char* str;                    
public:
    String(char* s)               
    {
        int length = strlen(s);    
        str = new char[length + 1];  
        strcpy(str, s);            
    }
    ~String()                    
    {
        delete str;
    }
    void display()                
    {
        cout << str;
    }
    void upit();                  
};

void String::upit()                 
{
    char* ptrch = str;               
    while (*ptrch)                 
    {
        *ptrch = toupper(*ptrch);     
        ptrch++;                     
    }
}
int main()
{   
    char ex_str[] = "He who laughs last laughs best.";
    String s1(ex_str);

    cout << "\ns1 = ";       
    s1.display();
    s1.upit();             
    cout << "\ns1 = ";       
    s1.display();
    cout << endl;
    return 0;
}

