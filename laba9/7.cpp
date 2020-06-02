// persort.cpp
// sorts person objects using array of pointers
#include <iostream>
#include <string>                
using namespace std;

class person                     
{
protected:
    string name;   
    float salary;
public:
    void setPerson()              
    {
        cout << "Enter name: "; cin >> name;
        cout << "Enter salary: "; cin >> salary;
    }
    void printPerson()            
    {
        cout << "\nName: " << name;
        cout << "\nSalary: " << salary;
    }
    string getName()            
    {
        return name;
    }
    float getSalary() 
    {
        return salary;
    }
};
void salsort(person** pp, int n)
{
    for (int j = 0; j < n - 1; j++)
        for (int k = j + 1; k < n; k++)
            if ( (*(pp + j))->getSalary() < (*(pp + k))->getSalary())
            {
                person* tempptr = *(pp + j);
                *(pp + j) = *(pp + k);
                *(pp + k) = tempptr;
            }
}
int main()
{   
    person* persPtr[100];          
    int n = 0;                     
    char choice;                   

    do {                           
        persPtr[n] = new person;    
        persPtr[n]->setPerson();      
        n++;                        
        cout << "Enter another (y/n)? "; 
        cin >> choice;             
    } while (choice == 'y');          

    salsort(persPtr, n);             

    cout << "\n  Sorted list:";
    for (int j = 0; j < n; j++)             
    {
        persPtr[j]->printPerson();
    }
    cout << endl;
    return 0;
} 
