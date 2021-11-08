//
// Created by Scheresh on 2021-11-08.
//

#include "Stack.h"

Stack::Stack(){
    this->elements = new List();
}

Stack::~Stack(){
    delete this->elements;
}

void Stack::push(int e){
    this->elements->insertFirst(e);
}

int Stack::pop(){
    if(this->elements->empty()){
        throw std::exception();
    }
    return this->elements->removeFirst();
}

bool Stack::isEmpty() {
    return this->elements->empty();
}