//
// Created by Scheresh on 2021-12-13.
//

#ifndef CPP_2021_ALKALMAZOTT_H
#define CPP_2021_ALKALMAZOTT_H


#include <iostream>
#include "Szemely.h"

using namespace std;



class Alkalmazott : public Szemely{
    static int counter;
protected:
    string munkakor;
    int id;
public:
    Alkalmazott(string vezetekNev, string keresztNev, int szuletesiEv,
                string munkakor);
};


#endif //CPP_2021_ALKALMAZOTT_H
