#include <iostream>
#include <cstring>  
#include <process.h>  
using namespace std;
 
class String           
{
private:
    enum { SZ = 80 };              
    char str[SZ];                  
public:
    String()                       
    {
        strcpy_s(str, "");
    }
    String(char s[])             
    {
        strcpy_s(str, s);
    }
    void display()                  
    {
        cout << str;
    }
    String operator += (String ss) 
    {                         
        if (strlen(str) + strlen(ss.str) >= SZ)
        {
            cout << "\nString overflow"; exit(1);
        }
        strcat_s(str, ss.str);        
        return String(str);        
    }
};
int main()
{
    char ch1[] = "Merry Christmas!  ", ch2[] = "Happy new year!" ;
    String s1(ch1);
    String s2(ch2);         
    String s3;                             

    s3 = s1 += s2;         //add s2 to s1, assign to s3

    cout << "\ns1 = "; s1.display();         //display s1
    cout << "\ns2 = "; s2.display();         //display s2
    cout << "\ns3 = "; s3.display();         //display s3
    cout << endl;
    return 0;
}

