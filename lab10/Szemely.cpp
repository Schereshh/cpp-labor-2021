//
// Created by Scheresh on 2021-12-13.
//

#include "Szemely.h"

Szemely::Szemely(const string &vezetekNev, const string &keresztNev, int szuletesiEv){
    this->vezetekNev = vezetekNev;
    this->keresztNev = keresztNev;
    this->szuletesiEv = szuletesiEv;
}

void Szemely::print(ostream &os) const{
    os << this->vezetekNev << " " << this->keresztNev << " " << this->szuletesiEv;
}

ostream &operator << (ostream &os, const Szemely &sz){
    sz.print(os);
    return os;
}