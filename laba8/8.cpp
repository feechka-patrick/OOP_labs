//inheritance from String class
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>                
using namespace std;
class String                      //base class
{
protected:                     //Note: can't be private
    enum { SZ = 80 };           //size of all String objects
    char str[SZ];               //holds a C-string
public:
    String()                    //constructor 0, no args
    {
        str[0] = '\0';
    }
    String(char s[])          //constructor 1, one arg
    {
        cout << endl << s;
        strcpy(str, s);
        cout << endl << str;
    }
    void display() const        //display the String
    {
        cout << str;
    }
    operator char* ()            //conversion function
    {
        return str;
    }          //convert String to C-string
};

class Pstring : public String     //derived class 
{
public:
    Pstring(char s[]);        //constructor
};
Pstring::Pstring(char s[])      //constructor for Pstring
{
    if (strlen(s) > SZ - 1)
    {
        int j;
        for (j = 0; j < SZ - 1; j++)
            str[j] = s[j];
        str[j] = '\0';
    }
    else {
        strncpy(str, s, SZ - 1);
    }
}
int main()
{
    char s[] = "This is a very long string which is probably "
        "no, certainly--going to exceed the limit set by SZ.";
    Pstring s1 = s;
    cout << "\ns1 = "; s1.display();           //display String
    char k[] = "This is a short string.";
    Pstring s2 = k;  //define String
    cout << "\ns2 = "; s2.display();           //display String
    cout << endl;
    return 0;
}
