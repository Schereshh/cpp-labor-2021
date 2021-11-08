//
// Created by Scheresh on 2021-11-08.
//

#ifndef CPP_2021_STACK_H
#define CPP_2021_STACK_H

#include <exception>
#include "List.h"

class Stack {
public:
    Stack();
    ~Stack();

    void push(int e);
    int pop();
    bool isEmpty();
private:
    List* elements;
};


#endif //CPP_2021_STACK_H
