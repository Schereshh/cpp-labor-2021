//
// Created by Scheresh on 2021-11-03.
//

#include "Account.h"

Account::Account(double balance) {
    this->balance = balance;
    this->id = counter+1;
}

void Account::deposit(double amount){
    this->balance += amount;
}

bool Account::withdraw(double amount) {
    if(amount > this->balance){
        cout << "Invalid input!";
        return false;
    }
    this->balance -= amount;
    return true;
}

int Account::getId() const {
    return this->id;
}

double Account::getBalance() const {
    return this->balance;
}


