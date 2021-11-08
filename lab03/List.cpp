//
// Created by Scheresh on 2021-11-08.
//

#include "List.h"

List::List(){
    this->first = nullptr;
}

List::~List(){
    nodeCounter = 0;
    Node* it = this->first;

    while(it){
        Node * next = it->next;
        delete it;
        it = next;
    }

    this->first = nullptr;
}

bool List::exists(int d) const {
    Node* it = this->first;

    while(it){
        if(it->value == d){
            return true;
        }
        it = it->next;
    }
    return false;
}

int List::size() const {
    return this->nodeCounter;
}

bool List::empty() const {
    if(this->first == nullptr){
        return true;
    }
    return false;
}

void List::insertFirst(int d) {
    auto node = new Node(d, this->first);
    this->first = node;
    this->nodeCounter++;
}

int List::removeFirst() {
    if(this->empty()){
        throw std::exception();
    }

    int t;

    Node* curr = this->first;
    Node* next = curr->next;
    t = curr->value;
    delete curr;
    this->first = next;
    this->nodeCounter--;
    return t;
}

void List::remove(int d, List::DeleteFlag df){
    Node* it = this->first;
    Node* prev = nullptr;

    while(it){
        Node* temp = nullptr;
        switch (df) {
            case DeleteFlag::LESS:
                if(it->value < d){
                    temp = it;
                }
                break;
            case DeleteFlag::EQUAL:
                if(it->value == d){
                    temp = it;
                }
                break;
            case DeleteFlag::GREATER:
                if(it->value > d){
                    temp = it;
                }
                break;
        }

        if(temp){
            it = it->next;
            delete temp;
            this->nodeCounter--;
            if(prev == nullptr){
                this->first = it;
            }
            else{
                prev->next = it;
            }
        } else{
            prev = it;
            it = it->next;
        }
    }
}

void List::print() const {
    Node* it = this->first;
    while(it){
        std::cout << it->value << " ";
        it = it->next;
    }
}