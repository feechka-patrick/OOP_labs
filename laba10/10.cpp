// lab9_4.cpp
// linked list includes destructor
#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
struct link                           //one element of list
{
    int data;                          //data item
    link* next;                        //pointer to next link
};
////////////////////////////////////////////////////////////////
class linklist                        //a list of links
{
private:
    link* first;                    //pointer to first link
public:
    linklist()                      //no-argument constructor
    {
        first = NULL;
    }            //no first link
    ~linklist();                    //destructor
    void additem(int d);            //add data item (one link)
    void display();                 //display all links
    void operator = (linklist newlist) 
    {
        first = new link;
        link* current = first;
        link* newcurrent = newlist.first;
        while (newcurrent->next != NULL) {
            current->data = newcurrent->data;
            current->next = new link;
            current = current->next;
            newcurrent = newcurrent->next;
        }
        current->data = newcurrent->data;
        current->next = NULL;
    }
};
//--------------------------------------------------------------
void linklist::additem(int d)         //add data item
{
    link* newlink = new link;          //make a new link
    newlink->data = d;                 //give it data
    newlink->next = first;             //it points to next link
    first = newlink;                   //now first points to this
}
//--------------------------------------------------------------
void linklist::display()              //display all links
{
    link* current = first;             //set ptr to first link
    while (current != NULL)           //quit on last link
    {
        cout << endl << current->data;  //print data
        current = current->next;        //move to next link
    }
}
//--------------------------------------------------------------
linklist::~linklist()                 //destructor
{
    link* current = first;             //set ptr to first link
    while (current != NULL)           //quit on last link
    {
        link* temp = current;     //save ptr to this link
        //cout << "Delete " << temp->data << endl;
        current = current->next;        //get ptr to next link
        delete temp;                    //delete this link
    }
}

int main()
{
    linklist li;       //make linked list
    linklist newli;

    li.additem(25);    //add four items to list
    li.additem(36);
    li.additem(49);
    li.additem(64);

    newli = li;
    
    delete &li;
    newli.display();

    return 0;
}
