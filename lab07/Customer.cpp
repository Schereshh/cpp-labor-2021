//
// Created by Scheresh on 2021-11-03.
//

#include "Customer.h"

int Customer::counter = 0;

Customer::Customer(const string &firstName, const string &lastName) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->id = counter;
    counter++;
}

const string &Customer::getFirstName() const {
    return this->firstName;
}

void Customer::setFirstName(const string &firstName) {
    this->firstName = firstName;
}

const string &Customer::getLastName() const {
    return this->lastName;
}

void Customer::setLastName(const string &lastName) {
    this->lastName = lastName;
}


