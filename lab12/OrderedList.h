//
// Created by Scheresh on 2021-12-15.
//

#ifndef CPP_2021_ORDEREDLIST_H
#define CPP_2021_ORDEREDLIST_H

#include <iostream>
#include <functional>

using namespace std;

template <class T, class LessComp = less<T>, class Equal = equal_to<T> >
class OrderedList {
private:
    struct Node{
        T value;
        Node * next;
        Node(T value, Node * next = nullptr) : value(value), next(next);
    };
    Node * first;
    int numElements = 0;
public:
    OrderedList();
    ~OrderedList();
    bool isEmpty() const;
    void insert(const &T);
};

template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::OrderedList() {

}

template<class T, class LessComp, class Equal>
OrderedList<T, LessComp, Equal>::~OrderedList() {
    Node * current = this->first;
    Node * next;
    while(current != nullptr){
        next = current->next;
        delete current;
        current = next;
    }
    this->numElements = 0;
}

template<class T, class LessComp, class Equal>
bool OrderedList<T, LessComp, Equal>::isEmpty() const {
    if(numElements == 0)
        return true;
    return false;
}

template<class T, class LessComp, class Equal>
void OrderedList<T, LessComp, Equal>::insert(const T& value){
    Node * ne = new Node(value); ++numElements;
    if(first == nullptr){
        first = ne;
        return;
    }
    if(LessComp()(value, first->value)){
        ne->next = first;
        first = ne;
    }
}


#endif //CPP_2021_ORDEREDLIST_H
