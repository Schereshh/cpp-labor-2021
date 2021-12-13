//
// Created by Scheresh on 2021-12-13.
//

#ifndef CPP_2021_SZEMELY_H
#define CPP_2021_SZEMELY_H


#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Szemely{
protected:
    string vezetekNev;
    string keresztNev;
    int szuletesiEv;
public:
    Szemely(const string &vezetekNev, const string &keresztNev, int szuletesiEv);
    virtual void print(ostream &os = cout) const;
    friend ostream &operator << (ostream &os, const Szemely &sz);
};

#endif //CPP_2021_SZEMELY_H
