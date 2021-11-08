#include <iostream>
#include "List.h"
#include "Stack.h"
#include <ctime>

#define NUM 5
using namespace std;

int main()
{
    //Testing the list methods
    cout << "List" << endl << "-----------------------" << endl;
    cout << "Created the list" << endl;
    auto list = new List();
    cout << endl;

    cout << "Is the list empty?" << endl;
    (list->empty() == 1) ? cout << "List is empty" << endl:
        cout << "List is not empty" << endl;
    cout << endl;

    cout << "Inserting " << NUM << endl;
    list->insertFirst(NUM);

    (list->empty() == 1) ? cout << "List is empty" << endl:
    cout << "List is not empty" << endl;
    cout << endl;

    cout << "Inserting numbers from 0 to 4" << endl;
    for(int i=0;i<=4;i++){
        list->insertFirst(i);
    }

    cout << "Printing list" << endl;
    list->print(); cout << endl;
    cout << endl;

    cout << "Checking the size of the list: " << list->size() << endl;
    cout << endl;

    cout << "Removing the first number from the list" << endl; list->removeFirst();
    list->print(); cout << endl;
    cout << endl;

    cout << "Removing number equal to " << NUM << endl;
    list->remove(5, List::DeleteFlag::EQUAL);
    list->print();
    cout << endl;

    cout << "Deleting list" << endl;
    delete list;
    cout << endl;

    //Testing the stack methods
    cout << "Stack" << endl << "------------------" << endl;
    cout << "Creating stack" << endl;
    auto stack = new Stack();
    cout << endl;

    srand(time(0));
    int n = 15;
    cout << "Pushing numbers into the stack" << endl;
    for(int i=0;i<n;i++){
        stack->push(rand()%51);
    }
    cout << endl;

    cout << "Is the stack empty?" << endl;
    (stack->isEmpty() == 1) ? cout << "The stack is empty" << endl :
        cout << "The stack is NOT empty" << endl;
    cout << endl;

    cout << "Popping out all the elements from the stack" << endl;
    for(int i=0;i<n;i++){
        stack->pop();
    }
    (stack->isEmpty() == 1) ? cout << "The stack is empty" << endl :
    cout << "The stack is NOT empty";

    return 0;
}