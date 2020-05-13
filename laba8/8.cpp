#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>                
using namespace std;
class String
{
protected:
    enum { SZ = 7 };
    char str[SZ];
public:
    String()
    {
        str[0] = '\0';
    }
    String(char s[])
    {
        cout << endl << s;
        strcpy(str, s);
        cout << endl << str;
    }
    void display() const
    {
        cout << " " << str;
    }
    operator char* ()
    {
        return str;
    }
};

class Pstring : public String
{
public:
    Pstring(char s[])
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
    };
};

class Pstring2 : public Pstring
{

public:
    Pstring2(char s[]) : Pstring(s) {}
    Pstring2 Left(int k) {
        char newstr[SZ];
        int i = 0;
        for (i = 0; i < k; i++) {
            newstr[i] = str[i];
        }
        newstr[i] = '\0';
        Pstring2 ns = newstr;
        return ns;
    }
    Pstring2 Right(int k) {
        char newstr[SZ];
        int i = SZ - k - 1, j = 0;
        for (i; i < SZ; i++, j++) {
            newstr[j] = str[i];
        }
        newstr[j] = '\0';
        Pstring2 ns = newstr;
        return ns;
    }
    Pstring2 Mid(int num, int ind) {
        char newstr[SZ]; ind--;
        int i = ind, j = 0;
        for (i; i < ind + num; i++, j++) {
            newstr[j] = str[i];
        }
        newstr[j] = '\0';
        Pstring2 ns = newstr;
        return ns;
    }
};

int main()
{
    char k[] = { 'h','e', 'l', 'l', 'o', 'y' };
    Pstring2 exampleClass(k);
    exampleClass.display();

    Pstring2 exampleClass1 = exampleClass.Left(1);
    cout << endl;
    exampleClass1.display();

    Pstring2 exampleClass2 = exampleClass.Right(2);
    cout << endl;
    exampleClass2.display();

    Pstring2 exampleClass3 = exampleClass.Mid(4, 1);
    cout << endl;
    exampleClass3.display();
}
